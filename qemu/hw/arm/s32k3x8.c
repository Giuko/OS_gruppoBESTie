#include "qemu/osdep.h"
#include "qapi/error.h"
#include "hw/qdev-properties.h"
#include "hw/boards.h"
#include "hw/arm/boot.h"
#include "qemu/typedefs.h"
#include "system/system.h"      /* instead of sysemu/sysemu */
#include "exec/address-spaces.h"
#include "qom/object.h"

#include "hw/arm/s32k3x8_mcu.h"

struct s32k3x8MachineState{
    MachineState parent;

    S32K3X8_MCUState mcu;
};

#define TYPE_S32K3X8_MACHINE MACHINE_TYPE_NAME("s32k3x8")
OBJECT_DECLARE_SIMPLE_TYPE(s32k3x8MachineState, S32K3X8_MACHINE);

/*
 * The following function will be in chare of the board initialization
 *
 * */
static void s32kx8_init(MachineState *machine){
    //DeviceState *dev;

    s32k3x8MachineState *s = S32K3X8_MACHINE(machine);
    MemoryRegion *system_memory = get_system_memory();
    object_initialize_child(OBJECT(machine), "s32k3x8_mcu", 
                            &s->mcu, TYPE_S32K3X8_MCU);

    object_property_set_link(   OBJECT(&s->mcu), "memory", 
                                OBJECT(system_memory), &error_fatal);

    sysbus_realize(SYS_BUS_DEVICE(&s->mcu), &error_fatal);
    
    

    if(machine->kernel_filename)
        armv7m_load_kernel( ARM_CPU(first_cpu), machine->kernel_filename, 
                            0, s->mcu.itcm_size);
}

/*
 * The following will be in charge of set some properties of 
 * the machine, and it is called by QEMU on type initialization
 * 
 * */
static void s32k3x8_machine_class_init(ObjectClass *oc, void *data){
    MachineClass *mc = MACHINE_CLASS(oc);

    mc->desc = "NXP S32K3X8 (Cortex-m7)";
    mc->init = s32kx8_init;
    mc->max_cpus = 1;
    mc->default_ram_size = 1152*1024;
}

/*
 * The following structure describe the machine class type:
 *
 * - It sets the machine name
 * - It sets the parent class type
 * - It sets the instance size
 * - It sets the class initialization callback
 * */
static const TypeInfo s32k3x8_info = {
    .name = TYPE_S32K3X8_MACHINE,
    .parent = TYPE_MACHINE,
    .instance_size = sizeof(s32k3x8MachineState),
    .class_init = s32k3x8_machine_class_init
};

/*
 * The following function is in charge of declaring every types
 *      related to out class
 * In fact it only registers our machine type
 * */
static void s32kx8_machine_init(void){
    type_register_static(&s32k3x8_info);
}
// Tells QEMU to register out module type
type_init(s32kx8_machine_init);


