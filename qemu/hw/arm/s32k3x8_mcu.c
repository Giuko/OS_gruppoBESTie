#include "qemu/osdep.h"
#include "qapi/error.h"
#include "hw/arm/boot.h"
#include "hw/sysbus.h"
#include "hw/qdev-clock.h"
#include "hw/misc/unimp.h"
#include "qemu/log.h"
#include "qemu/typedefs.h"
#include "qom/object.h"

#include "hw/arm/s32k3x8_mcu.h"
#include "hw/arm/s32k3.h"

static void s32k3x8_mcu_init(Object *obj){
    S32K3X8_MCUState *s = S32K3X8_MCU(obj);

    /* Initialize the MCU memory container */
    memory_region_init( &s->container, obj, 
                        "s32k3x8_mcu-container", UINT64_MAX);

    /* CPU PROPERTY INITIALIZATION*/
    /*  CPU will be added to out system bus and will provide code
     *  emulation. Now we have a CPU inside out MCU
     *  */
    object_initialize_child(OBJECT(s), "armv7m", 
                            &s->cpu, TYPE_ARMV7M);

    qdev_prop_set_string(   DEVICE(&s->cpu), "cpu-type", 
                            ARM_CPU_TYPE_NAME("cortex-m7"));

    qdev_prop_set_uint32(DEVICE(&s->cpu), "num-irq", 240);


    /* 
     * Initialize a clock for this device called "sysclk"
     *
     * */
    s->sysclk = qdev_init_clock_in(DEVICE(s), "sysclk", NULL, NULL, 0);   

}

static void s32k3x8_mcu_realize(DeviceState *dev_mcu, Error **errp){
    S32K3X8_MCUState *s = S32K3X8_MCU(dev_mcu);
    Error *err = NULL;
    MemoryRegion *mr;

    if(!s->board_memory){
        error_setg(errp, "Memory property was not set");
        return;
    }

    if(clock_has_source(s->sysclk)){
        error_setg(errp, "Sysclk clock not wired");
        return;
    }

    clock_set_hz(s->sysclk, 48*1000*1000);
    qdev_connect_clock_in(DEVICE(&s->cpu), "cpuclk", s->sysclk);

    object_property_set_link(   OBJECT(&s->cpu), "memory", 
                                OBJECT(&s->container), &error_abort);
    
    if(!sysbus_realize(SYS_BUS_DEVICE(&s->cpu), errp)){
        return;
    }
   
    /*
     *  map the board memory inside memory container
     * */
    memory_region_add_subregion_overlap(&s->container, 0, 
                                        s->board_memory, -1);


    memory_region_init_ram( &s->itcm, OBJECT(s), "s32k3x8.itcm", 
                            s->itcm_size, &err);
    if(err){
        error_propagate(errp, err);
        return;
    }

    memory_region_add_subregion(&s->container, ITCM_BASE_ADDRESS, 
                                &s->itcm);



    memory_region_init_ram( &s->sram, OBJECT(s), "s32k3x8.sram", 
                            s->sram_size, &err);
    if(err){
        error_propagate(errp, err);
        return;
    }

    memory_region_add_subregion(&s->container, SRAM_BASE_ADDRESS, 
                                &s->sram);


    memory_region_init_ram( &s->flash, OBJECT(s), "s32k3x8.flash", 
                            s->flash_size, &err);
    if(err){
        error_propagate(errp, err);
        return;
    }

    memory_region_add_subregion(&s->container, PFLASH_BASE_ADDRESS, 
                                &s->flash);

}

static const Property s32k3x8_mcu_properties[] = {
    DEFINE_PROP_LINK(   "memory", S32K3X8_MCUState, 
                        board_memory, TYPE_MEMORY_REGION,
                        MemoryRegion *),

    DEFINE_PROP_UINT32("itcm-size", S32K3X8_MCUState, itcm_size,
                        ITCM_BLOCK_SIZE),
    
    DEFINE_PROP_UINT32("sram-size", S32K3X8_MCUState, sram_size,
                        SRAM_SIZE),
    
    DEFINE_PROP_UINT32("flash-size", S32K3X8_MCUState, flash_size,
                        PFLASH_SIZE)
};

static void s32k3x8_mcu_class_init(ObjectClass *klass, void *data){
    DeviceClass *dc = DEVICE_CLASS(klass);
    
    dc->realize = s32k3x8_mcu_realize;
    device_class_set_props(dc, s32k3x8_mcu_properties);
}

static const TypeInfo s32k3x8_mcu_info = {
    .name           = TYPE_S32K3X8_MCU,
    .parent         = TYPE_SYS_BUS_DEVICE,
    .instance_size  = sizeof(S32K3X8_MCUState),
    .instance_init  = s32k3x8_mcu_init,
    .class_init     = s32k3x8_mcu_class_init,
};

static void s32k3x8_mcu_types(void){
    type_register_static(&s32k3x8_mcu_info);
}

type_init(s32k3x8_mcu_types);
