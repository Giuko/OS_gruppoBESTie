#ifndef HW_ARM_NXPS32K3_H
#define HW_ARM_NXPS32K3_H

#include "hw/arm/armv7m.h"
#include "qom/object.h"
#include "hw/clock.h"

#define TYPE_NXPS32K3 "nxps32k3"
OBJECT_DECLARE_SIMPLE_TYPE(NXPS32K3State, NXPS32K3);

// Flash Controller 1
#define PFC1        0x40068000
#define PFC1_SIZE  (16 * 1024) 

#define FLASH_BASE_ADDRESS 
#define FLASH_SIZE 
#define SRAM_BASE_ADDRESS 
#define SRAM_SIZE

#endif
