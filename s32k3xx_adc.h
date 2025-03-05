/*
 * s32k3xx_adc.h
 *
 * Questo file definisce la struttura dell'ADC per la scheda S32K3X8EVB.
 * Usato per l'emulazione in QEMU.
 */

#ifndef S32K3XX_ADC_H
#define S32K3XX_ADC_H

#include "hw/sysbus.h"
#include "qom/object.h"

/* 
 * Registri dell'ADC.
 * CTRL: Controllo dell'ADC, accensione e start.
 * CFG:  Configurazione del sampling.
 * DATA: Il valore letto dall'ADC.
 */
#define S32K3XX_ADC_CTRL    0x00
#define S32K3XX_ADC_CFG     0x04
#define S32K3XX_ADC_DATA    0x08

/* Bit di controllo */
#define S32K3XX_ADC_ENABLE  0x01  // Accendi l'ADC
#define S32K3XX_ADC_START   0x02  // Inizia la conversione

#define TYPE_S32K3XX_ADC "s32k3xx-adc"
OBJECT_DECLARE_SIMPLE_TYPE(S32K3XXADCState, S32K3XX_ADC)

/* 
 * Struttura che rappresenta l'ADC virtuale.
 */
struct S32K3XXADCState {
    SysBusDevice parent_obj; // Device principale
    MemoryRegion mmio;       // Memoria mappata
    uint32_t ctrl;           // Registro di controllo
    uint32_t cfg;            // Registro di configurazione
    uint32_t data;           // Ultimo valore letto
    qemu_irq irq;            // Interrupt per segnalare fine conversione
};

#endif /* S32K3XX_ADC_H */
