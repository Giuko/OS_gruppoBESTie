#ifndef HW_ARM_NXPS32K3_H
#define HW_ARM_NXPS32K3_H

#include "hw/arm/armv7m.h"
#include "qom/object.h"
#include "hw/clock.h"
#include "s32k3xx_uart.h"

#define TYPE_NXPS32K3 "nxps32k3"
OBJECT_DECLARE_SIMPLE_TYPE(NXPS32K3State, NXPS32K3);

// Defining PFLASH_ADDRESS and SIZE
#define PFLASH_BASE_ADDRESS 0x00400000
#define PBLOCK0_OFFSET      (0    * 1024)
#define PBLOCK1_OFFSET      (2048 * 1024)
#define PBLOCK2_OFFSET      (4096 * 1024)
#define PBLOCK3_OFFSET      (6144 * 1024)

#define PFLASH_BLOCK_SIZE   (2048 * 1024)
#define PFLASH_NUM          4

#define PFLASH_BLOCK0       (FLASH_BASE_ADDRESS + BLOCK0_OFFSET)
#define PFLASH_BLOCK1       (FLASH_BASE_ADDRESS + BLOCK1_OFFSET)
#define PFLASH_BLOCK2       (FLASH_BASE_ADDRESS + BLOCK2_OFFSET)
#define PFLASH_BLOCK3       (FLASH_BASE_ADDRESS + BLOCK3_OFFSET)

// Defining DATA_FLASH_BASE_ADDRESS and SIZE
#define DFLASH_BASE_ADDRESS 0x10000000
#define DBLOCK_OFFSET       (0 * 1024)

#define DFLASH_BLOCK_SIZE   (128 * 1024)
#define DFLASH_NUM          1

// Defining SRAM_ADDRESS and SIZE
#define SRAM_BASE_ADDRESS   0x20400000
#define SRAM0_OFFSET        (0   * 1024)
#define SRAM1_OFFSET        (256 * 1024)
#define SRAM2_OFFSET        (512 * 1024)

#define SRAM_SIZE           (256 * 1024)    // 256 KB
#define SRAM_NUM            3

#define SRAM0               (SRAM_BASE_ADDRESS + SRAM0_OFFSET)
#define SRAM1               (SRAM_BASE_ADDRESS + SRAM1_OFFSET)
#define SRAM2               (SRAM_BASE_ADDRESS + SRAM2_OFFSET)

#endif
