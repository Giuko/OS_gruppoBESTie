/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_pci_host.h"

uint16_t _TRACE_BONITO_SPCICONF_SMALL_ACCESS_DSTATE;
uint16_t _TRACE_GRACKLE_SET_IRQ_DSTATE;
uint16_t _TRACE_GT64120_READ_DSTATE;
uint16_t _TRACE_GT64120_WRITE_DSTATE;
uint16_t _TRACE_GT64120_READ_INTREG_DSTATE;
uint16_t _TRACE_GT64120_WRITE_INTREG_DSTATE;
uint16_t _TRACE_GT64120_ISD_REMAP_DSTATE;
uint16_t _TRACE_MV64361_REGION_MAP_DSTATE;
uint16_t _TRACE_MV64361_REGION_ENABLE_DSTATE;
uint16_t _TRACE_MV64361_REG_READ_DSTATE;
uint16_t _TRACE_MV64361_REG_WRITE_DSTATE;
uint16_t _TRACE_SABRE_SET_REQUEST_DSTATE;
uint16_t _TRACE_SABRE_CLEAR_REQUEST_DSTATE;
uint16_t _TRACE_SABRE_CONFIG_WRITE_DSTATE;
uint16_t _TRACE_SABRE_CONFIG_READ_DSTATE;
uint16_t _TRACE_SABRE_PCI_CONFIG_WRITE_DSTATE;
uint16_t _TRACE_SABRE_PCI_CONFIG_READ_DSTATE;
uint16_t _TRACE_SABRE_PCI_SET_IRQ_DSTATE;
uint16_t _TRACE_SABRE_PCI_SET_OBIO_IRQ_DSTATE;
uint16_t _TRACE_UNIN_SET_IRQ_DSTATE;
uint16_t _TRACE_UNIN_GET_CONFIG_REG_DSTATE;
uint16_t _TRACE_UNIN_DATA_WRITE_DSTATE;
uint16_t _TRACE_UNIN_DATA_READ_DSTATE;
uint16_t _TRACE_UNIN_WRITE_DSTATE;
uint16_t _TRACE_UNIN_READ_DSTATE;
uint16_t _TRACE_PNV_PHB4_XIVE_NOTIFY_DSTATE;
uint16_t _TRACE_PNV_PHB4_XIVE_NOTIFY_IC_DSTATE;
uint16_t _TRACE_PNV_PHB4_XIVE_NOTIFY_ABT_DSTATE;
uint16_t _TRACE_DINO_CHIP_MEM_VALID_DSTATE;
uint16_t _TRACE_DINO_CHIP_READ_DSTATE;
uint16_t _TRACE_DINO_CHIP_WRITE_DSTATE;
uint16_t _TRACE_ASTRO_CHIP_MEM_VALID_DSTATE;
uint16_t _TRACE_ASTRO_CHIP_READ_DSTATE;
uint16_t _TRACE_ASTRO_CHIP_WRITE_DSTATE;
uint16_t _TRACE_ELROY_READ_DSTATE;
uint16_t _TRACE_ELROY_WRITE_DSTATE;
uint16_t _TRACE_ELROY_PCI_CONFIG_DATA_READ_DSTATE;
uint16_t _TRACE_ELROY_PCI_CONFIG_DATA_WRITE_DSTATE;
uint16_t _TRACE_IOSAPIC_REG_WRITE_DSTATE;
uint16_t _TRACE_IOSAPIC_REG_READ_DSTATE;
TraceEvent _TRACE_BONITO_SPCICONF_SMALL_ACCESS_EVENT = {
    .id = 0,
    .name = "bonito_spciconf_small_access",
    .sstate = TRACE_BONITO_SPCICONF_SMALL_ACCESS_ENABLED,
    .dstate = &_TRACE_BONITO_SPCICONF_SMALL_ACCESS_DSTATE 
};
TraceEvent _TRACE_GRACKLE_SET_IRQ_EVENT = {
    .id = 0,
    .name = "grackle_set_irq",
    .sstate = TRACE_GRACKLE_SET_IRQ_ENABLED,
    .dstate = &_TRACE_GRACKLE_SET_IRQ_DSTATE 
};
TraceEvent _TRACE_GT64120_READ_EVENT = {
    .id = 0,
    .name = "gt64120_read",
    .sstate = TRACE_GT64120_READ_ENABLED,
    .dstate = &_TRACE_GT64120_READ_DSTATE 
};
TraceEvent _TRACE_GT64120_WRITE_EVENT = {
    .id = 0,
    .name = "gt64120_write",
    .sstate = TRACE_GT64120_WRITE_ENABLED,
    .dstate = &_TRACE_GT64120_WRITE_DSTATE 
};
TraceEvent _TRACE_GT64120_READ_INTREG_EVENT = {
    .id = 0,
    .name = "gt64120_read_intreg",
    .sstate = TRACE_GT64120_READ_INTREG_ENABLED,
    .dstate = &_TRACE_GT64120_READ_INTREG_DSTATE 
};
TraceEvent _TRACE_GT64120_WRITE_INTREG_EVENT = {
    .id = 0,
    .name = "gt64120_write_intreg",
    .sstate = TRACE_GT64120_WRITE_INTREG_ENABLED,
    .dstate = &_TRACE_GT64120_WRITE_INTREG_DSTATE 
};
TraceEvent _TRACE_GT64120_ISD_REMAP_EVENT = {
    .id = 0,
    .name = "gt64120_isd_remap",
    .sstate = TRACE_GT64120_ISD_REMAP_ENABLED,
    .dstate = &_TRACE_GT64120_ISD_REMAP_DSTATE 
};
TraceEvent _TRACE_MV64361_REGION_MAP_EVENT = {
    .id = 0,
    .name = "mv64361_region_map",
    .sstate = TRACE_MV64361_REGION_MAP_ENABLED,
    .dstate = &_TRACE_MV64361_REGION_MAP_DSTATE 
};
TraceEvent _TRACE_MV64361_REGION_ENABLE_EVENT = {
    .id = 0,
    .name = "mv64361_region_enable",
    .sstate = TRACE_MV64361_REGION_ENABLE_ENABLED,
    .dstate = &_TRACE_MV64361_REGION_ENABLE_DSTATE 
};
TraceEvent _TRACE_MV64361_REG_READ_EVENT = {
    .id = 0,
    .name = "mv64361_reg_read",
    .sstate = TRACE_MV64361_REG_READ_ENABLED,
    .dstate = &_TRACE_MV64361_REG_READ_DSTATE 
};
TraceEvent _TRACE_MV64361_REG_WRITE_EVENT = {
    .id = 0,
    .name = "mv64361_reg_write",
    .sstate = TRACE_MV64361_REG_WRITE_ENABLED,
    .dstate = &_TRACE_MV64361_REG_WRITE_DSTATE 
};
TraceEvent _TRACE_SABRE_SET_REQUEST_EVENT = {
    .id = 0,
    .name = "sabre_set_request",
    .sstate = TRACE_SABRE_SET_REQUEST_ENABLED,
    .dstate = &_TRACE_SABRE_SET_REQUEST_DSTATE 
};
TraceEvent _TRACE_SABRE_CLEAR_REQUEST_EVENT = {
    .id = 0,
    .name = "sabre_clear_request",
    .sstate = TRACE_SABRE_CLEAR_REQUEST_ENABLED,
    .dstate = &_TRACE_SABRE_CLEAR_REQUEST_DSTATE 
};
TraceEvent _TRACE_SABRE_CONFIG_WRITE_EVENT = {
    .id = 0,
    .name = "sabre_config_write",
    .sstate = TRACE_SABRE_CONFIG_WRITE_ENABLED,
    .dstate = &_TRACE_SABRE_CONFIG_WRITE_DSTATE 
};
TraceEvent _TRACE_SABRE_CONFIG_READ_EVENT = {
    .id = 0,
    .name = "sabre_config_read",
    .sstate = TRACE_SABRE_CONFIG_READ_ENABLED,
    .dstate = &_TRACE_SABRE_CONFIG_READ_DSTATE 
};
TraceEvent _TRACE_SABRE_PCI_CONFIG_WRITE_EVENT = {
    .id = 0,
    .name = "sabre_pci_config_write",
    .sstate = TRACE_SABRE_PCI_CONFIG_WRITE_ENABLED,
    .dstate = &_TRACE_SABRE_PCI_CONFIG_WRITE_DSTATE 
};
TraceEvent _TRACE_SABRE_PCI_CONFIG_READ_EVENT = {
    .id = 0,
    .name = "sabre_pci_config_read",
    .sstate = TRACE_SABRE_PCI_CONFIG_READ_ENABLED,
    .dstate = &_TRACE_SABRE_PCI_CONFIG_READ_DSTATE 
};
TraceEvent _TRACE_SABRE_PCI_SET_IRQ_EVENT = {
    .id = 0,
    .name = "sabre_pci_set_irq",
    .sstate = TRACE_SABRE_PCI_SET_IRQ_ENABLED,
    .dstate = &_TRACE_SABRE_PCI_SET_IRQ_DSTATE 
};
TraceEvent _TRACE_SABRE_PCI_SET_OBIO_IRQ_EVENT = {
    .id = 0,
    .name = "sabre_pci_set_obio_irq",
    .sstate = TRACE_SABRE_PCI_SET_OBIO_IRQ_ENABLED,
    .dstate = &_TRACE_SABRE_PCI_SET_OBIO_IRQ_DSTATE 
};
TraceEvent _TRACE_UNIN_SET_IRQ_EVENT = {
    .id = 0,
    .name = "unin_set_irq",
    .sstate = TRACE_UNIN_SET_IRQ_ENABLED,
    .dstate = &_TRACE_UNIN_SET_IRQ_DSTATE 
};
TraceEvent _TRACE_UNIN_GET_CONFIG_REG_EVENT = {
    .id = 0,
    .name = "unin_get_config_reg",
    .sstate = TRACE_UNIN_GET_CONFIG_REG_ENABLED,
    .dstate = &_TRACE_UNIN_GET_CONFIG_REG_DSTATE 
};
TraceEvent _TRACE_UNIN_DATA_WRITE_EVENT = {
    .id = 0,
    .name = "unin_data_write",
    .sstate = TRACE_UNIN_DATA_WRITE_ENABLED,
    .dstate = &_TRACE_UNIN_DATA_WRITE_DSTATE 
};
TraceEvent _TRACE_UNIN_DATA_READ_EVENT = {
    .id = 0,
    .name = "unin_data_read",
    .sstate = TRACE_UNIN_DATA_READ_ENABLED,
    .dstate = &_TRACE_UNIN_DATA_READ_DSTATE 
};
TraceEvent _TRACE_UNIN_WRITE_EVENT = {
    .id = 0,
    .name = "unin_write",
    .sstate = TRACE_UNIN_WRITE_ENABLED,
    .dstate = &_TRACE_UNIN_WRITE_DSTATE 
};
TraceEvent _TRACE_UNIN_READ_EVENT = {
    .id = 0,
    .name = "unin_read",
    .sstate = TRACE_UNIN_READ_ENABLED,
    .dstate = &_TRACE_UNIN_READ_DSTATE 
};
TraceEvent _TRACE_PNV_PHB4_XIVE_NOTIFY_EVENT = {
    .id = 0,
    .name = "pnv_phb4_xive_notify",
    .sstate = TRACE_PNV_PHB4_XIVE_NOTIFY_ENABLED,
    .dstate = &_TRACE_PNV_PHB4_XIVE_NOTIFY_DSTATE 
};
TraceEvent _TRACE_PNV_PHB4_XIVE_NOTIFY_IC_EVENT = {
    .id = 0,
    .name = "pnv_phb4_xive_notify_ic",
    .sstate = TRACE_PNV_PHB4_XIVE_NOTIFY_IC_ENABLED,
    .dstate = &_TRACE_PNV_PHB4_XIVE_NOTIFY_IC_DSTATE 
};
TraceEvent _TRACE_PNV_PHB4_XIVE_NOTIFY_ABT_EVENT = {
    .id = 0,
    .name = "pnv_phb4_xive_notify_abt",
    .sstate = TRACE_PNV_PHB4_XIVE_NOTIFY_ABT_ENABLED,
    .dstate = &_TRACE_PNV_PHB4_XIVE_NOTIFY_ABT_DSTATE 
};
TraceEvent _TRACE_DINO_CHIP_MEM_VALID_EVENT = {
    .id = 0,
    .name = "dino_chip_mem_valid",
    .sstate = TRACE_DINO_CHIP_MEM_VALID_ENABLED,
    .dstate = &_TRACE_DINO_CHIP_MEM_VALID_DSTATE 
};
TraceEvent _TRACE_DINO_CHIP_READ_EVENT = {
    .id = 0,
    .name = "dino_chip_read",
    .sstate = TRACE_DINO_CHIP_READ_ENABLED,
    .dstate = &_TRACE_DINO_CHIP_READ_DSTATE 
};
TraceEvent _TRACE_DINO_CHIP_WRITE_EVENT = {
    .id = 0,
    .name = "dino_chip_write",
    .sstate = TRACE_DINO_CHIP_WRITE_ENABLED,
    .dstate = &_TRACE_DINO_CHIP_WRITE_DSTATE 
};
TraceEvent _TRACE_ASTRO_CHIP_MEM_VALID_EVENT = {
    .id = 0,
    .name = "astro_chip_mem_valid",
    .sstate = TRACE_ASTRO_CHIP_MEM_VALID_ENABLED,
    .dstate = &_TRACE_ASTRO_CHIP_MEM_VALID_DSTATE 
};
TraceEvent _TRACE_ASTRO_CHIP_READ_EVENT = {
    .id = 0,
    .name = "astro_chip_read",
    .sstate = TRACE_ASTRO_CHIP_READ_ENABLED,
    .dstate = &_TRACE_ASTRO_CHIP_READ_DSTATE 
};
TraceEvent _TRACE_ASTRO_CHIP_WRITE_EVENT = {
    .id = 0,
    .name = "astro_chip_write",
    .sstate = TRACE_ASTRO_CHIP_WRITE_ENABLED,
    .dstate = &_TRACE_ASTRO_CHIP_WRITE_DSTATE 
};
TraceEvent _TRACE_ELROY_READ_EVENT = {
    .id = 0,
    .name = "elroy_read",
    .sstate = TRACE_ELROY_READ_ENABLED,
    .dstate = &_TRACE_ELROY_READ_DSTATE 
};
TraceEvent _TRACE_ELROY_WRITE_EVENT = {
    .id = 0,
    .name = "elroy_write",
    .sstate = TRACE_ELROY_WRITE_ENABLED,
    .dstate = &_TRACE_ELROY_WRITE_DSTATE 
};
TraceEvent _TRACE_ELROY_PCI_CONFIG_DATA_READ_EVENT = {
    .id = 0,
    .name = "elroy_pci_config_data_read",
    .sstate = TRACE_ELROY_PCI_CONFIG_DATA_READ_ENABLED,
    .dstate = &_TRACE_ELROY_PCI_CONFIG_DATA_READ_DSTATE 
};
TraceEvent _TRACE_ELROY_PCI_CONFIG_DATA_WRITE_EVENT = {
    .id = 0,
    .name = "elroy_pci_config_data_write",
    .sstate = TRACE_ELROY_PCI_CONFIG_DATA_WRITE_ENABLED,
    .dstate = &_TRACE_ELROY_PCI_CONFIG_DATA_WRITE_DSTATE 
};
TraceEvent _TRACE_IOSAPIC_REG_WRITE_EVENT = {
    .id = 0,
    .name = "iosapic_reg_write",
    .sstate = TRACE_IOSAPIC_REG_WRITE_ENABLED,
    .dstate = &_TRACE_IOSAPIC_REG_WRITE_DSTATE 
};
TraceEvent _TRACE_IOSAPIC_REG_READ_EVENT = {
    .id = 0,
    .name = "iosapic_reg_read",
    .sstate = TRACE_IOSAPIC_REG_READ_ENABLED,
    .dstate = &_TRACE_IOSAPIC_REG_READ_DSTATE 
};
TraceEvent *hw_pci_host_trace_events[] = {
    &_TRACE_BONITO_SPCICONF_SMALL_ACCESS_EVENT,
    &_TRACE_GRACKLE_SET_IRQ_EVENT,
    &_TRACE_GT64120_READ_EVENT,
    &_TRACE_GT64120_WRITE_EVENT,
    &_TRACE_GT64120_READ_INTREG_EVENT,
    &_TRACE_GT64120_WRITE_INTREG_EVENT,
    &_TRACE_GT64120_ISD_REMAP_EVENT,
    &_TRACE_MV64361_REGION_MAP_EVENT,
    &_TRACE_MV64361_REGION_ENABLE_EVENT,
    &_TRACE_MV64361_REG_READ_EVENT,
    &_TRACE_MV64361_REG_WRITE_EVENT,
    &_TRACE_SABRE_SET_REQUEST_EVENT,
    &_TRACE_SABRE_CLEAR_REQUEST_EVENT,
    &_TRACE_SABRE_CONFIG_WRITE_EVENT,
    &_TRACE_SABRE_CONFIG_READ_EVENT,
    &_TRACE_SABRE_PCI_CONFIG_WRITE_EVENT,
    &_TRACE_SABRE_PCI_CONFIG_READ_EVENT,
    &_TRACE_SABRE_PCI_SET_IRQ_EVENT,
    &_TRACE_SABRE_PCI_SET_OBIO_IRQ_EVENT,
    &_TRACE_UNIN_SET_IRQ_EVENT,
    &_TRACE_UNIN_GET_CONFIG_REG_EVENT,
    &_TRACE_UNIN_DATA_WRITE_EVENT,
    &_TRACE_UNIN_DATA_READ_EVENT,
    &_TRACE_UNIN_WRITE_EVENT,
    &_TRACE_UNIN_READ_EVENT,
    &_TRACE_PNV_PHB4_XIVE_NOTIFY_EVENT,
    &_TRACE_PNV_PHB4_XIVE_NOTIFY_IC_EVENT,
    &_TRACE_PNV_PHB4_XIVE_NOTIFY_ABT_EVENT,
    &_TRACE_DINO_CHIP_MEM_VALID_EVENT,
    &_TRACE_DINO_CHIP_READ_EVENT,
    &_TRACE_DINO_CHIP_WRITE_EVENT,
    &_TRACE_ASTRO_CHIP_MEM_VALID_EVENT,
    &_TRACE_ASTRO_CHIP_READ_EVENT,
    &_TRACE_ASTRO_CHIP_WRITE_EVENT,
    &_TRACE_ELROY_READ_EVENT,
    &_TRACE_ELROY_WRITE_EVENT,
    &_TRACE_ELROY_PCI_CONFIG_DATA_READ_EVENT,
    &_TRACE_ELROY_PCI_CONFIG_DATA_WRITE_EVENT,
    &_TRACE_IOSAPIC_REG_WRITE_EVENT,
    &_TRACE_IOSAPIC_REG_READ_EVENT,
  NULL,
};

static void trace_hw_pci_host_register_events(void)
{
    trace_event_register_group(hw_pci_host_trace_events);
}
trace_init(trace_hw_pci_host_register_events)
