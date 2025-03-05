#ifndef S32K3X8_MCU_H
#define S32K3X8_MCU_H

#include "hw/sysbus.h"
#include "hw/arm/armv7m.h"
#include "hw/clock.h"
#include "qom/object.h"

#include "stdint.h"

#define TYPE_S32K3X8_MCU "s32k3x8-mcu"
OBJECT_DECLARE_SIMPLE_TYPE(S32K3X8_MCUState, S32K3X8_MCU);

struct S32K3X8_MCUState{
    SysBusDevice parent_obj;

    ARMv7MState cpu;

    Clock *sysclk;

    MemoryRegion container;

    MemoryRegion *board_memory;

    MemoryRegion itcm;
    uint32_t itcm_size;

    MemoryRegion sram;
    uint32_t sram_size;

    MemoryRegion flash;
    uint32_t flash_size;
};

#endif
