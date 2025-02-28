#include "qemu/osdep.h"
#include "qapi/error.h"
#include "hw/sysbus.h"
#include "hw/arm/boot.h"
#include "hw/boards.h"
#include "exec/address-spaces.h"
#include "system/system.h"
#include "hw/arm/armv7m.h"
#include "qom/object.h"

#include "hw/arm/s32k3.h"       /* Constants for memory allocation */

#define S32K3_RAM_SIZE ITCM_BLOCK_SIZE


static void s32k3_init(MachineState *machine){
    Error *err;
   // DeviceState *armv7m;
    Object *soc_container;

    //   MachineClass *mc = MACHINE_GET_CLASS(machine);
   

    /* MEMORY MAPPING */

    soc_container = object_new(TYPE_CONTAINER);
    object_property_add_child(OBJECT(machine), "soc", soc_container);

    /* g_new() to allocate memory */
    MemoryRegion *itcm      = g_new(MemoryRegion, 1);

    MemoryRegion *pflash    = g_new(MemoryRegion, 1);
    MemoryRegion *pflash0   = g_new(MemoryRegion, 1);
    MemoryRegion *pflash1   = g_new(MemoryRegion, 1);
    MemoryRegion *pflash2   = g_new(MemoryRegion, 1);
    MemoryRegion *pflash3   = g_new(MemoryRegion, 1);
    
    MemoryRegion *dflash    = g_new(MemoryRegion, 1);
    
    MemoryRegion *sram      = g_new(MemoryRegion, 1);
    MemoryRegion *sram0     = g_new(MemoryRegion, 1);
    MemoryRegion *sram1     = g_new(MemoryRegion, 1);
    MemoryRegion *sram2     = g_new(MemoryRegion, 1);
    /* Some other memory regions to declare */

    MemoryRegion *system_memory = get_system_memory();
    
    
    memory_region_init_ram(itcm, NULL, "s32k3.itcm", ITCM_BLOCK_SIZE, &err);

    memory_region_init(pflash, NULL, "s32k3.pflash", PFLASH_SIZE);
    memory_region_init_rom(pflash0, NULL, "s32k3.pflash0", PFLASH_BLOCK_SIZE, &err);
    memory_region_init_rom(pflash1, NULL, "s32k3.pflash1", PFLASH_BLOCK_SIZE, &err);
    memory_region_init_rom(pflash2, NULL, "s32k3.pflash2", PFLASH_BLOCK_SIZE, &err);
    memory_region_init_rom(pflash3, NULL, "s32k3.pflash3", PFLASH_BLOCK_SIZE, &err);
    memory_region_add_subregion(pflash, PBLOCK0_OFFSET, pflash0);
    memory_region_add_subregion(pflash, PBLOCK1_OFFSET, pflash1);
    memory_region_add_subregion(pflash, PBLOCK2_OFFSET, pflash2);
    memory_region_add_subregion(pflash, PBLOCK3_OFFSET, pflash3);
 
    memory_region_init_rom(dflash, NULL, "s32k3.dflash", DFLASH_BLOCK_SIZE, &err);

    memory_region_init(sram, NULL, "s32k3.sram", SRAM_SIZE);
    memory_region_init_ram(sram0, NULL, "s32k3.sram0", SRAM_BLOCK_SIZE, &err);
    memory_region_init_ram(sram1, NULL, "s32k3.sram1", SRAM_BLOCK_SIZE, &err);
    memory_region_init_ram(sram2, NULL, "s32k3.sram2", SRAM_BLOCK_SIZE, &err);
    memory_region_add_subregion(sram, SRAM0_OFFSET, sram0);
    memory_region_add_subregion(sram, SRAM0_OFFSET, sram1);
    memory_region_add_subregion(sram, SRAM0_OFFSET, sram2);
 
    memory_region_add_subregion(system_memory, ITCM_BASE_ADDRESS, itcm);
    memory_region_add_subregion(system_memory, PFLASH_BASE_ADDRESS, pflash);
    memory_region_add_subregion(system_memory, DFLASH_BASE_ADDRESS, dflash);
    memory_region_add_subregion(system_memory, SRAM_BASE_ADDRESS, sram);    

    /* Define CPU */
//    armv7m = qdev_new(TYPE_ARMV7M);
    
//    object_property_set_link(OBJECT(armv7m), "memory", OBJECT(get_system_memory()), &err);
//    object_property_add_child(soc_container, "v7m", OBJECT(armv7m));
    
    /* Add peripherals (UART, ADC) */
}

static void s32k3_machine_init(MachineClass *mc){
    mc->desc = "NXP S32K3 (Cortex-M7)";
    mc->init = s32k3_init;
    mc->default_ram_size = S32K3_RAM_SIZE;
    mc->default_cpu_type = ARM_CPU_TYPE_NAME("cortex-m7");

    /* M-profile specific flags */
    /*
    mc->no_cdrom = true;
    mc->no_parallel = true;
    mc->no_floppy = true;

    mc->ignore_memory_transaction_failures = true;
    */
}

DEFINE_MACHINE("s32k3", s32k3_machine_init)
