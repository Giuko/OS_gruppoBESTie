#include "qemu/osdep.h"
#include "qapi/error.h"
#include "hw/boards.h"
#include "hw/arm/boot.h"
#include "hw/qdev-properties.h"
#include "hw/sysbus.h"
#include "exec/address-spaces.h"
#include "qom/object.h"
#include "hw/arm/armv7m.h"

#define TYPE_S32K3X8EVB_MACHINE MACHINE_TYPE_NAME("s32k3x8evb")
OBJECT_DECLARE_SIMPLE_TYPE(S32K3X8EVBState, S32K3X8EVB_MACHINE)

// Define the board state structure
struct S32K3X8EVBState {
    MachineState parent;
    ARMv7MState cpu;  // ARM Cortex-M7 CPU state
    MemoryRegion container;  // Memory container for the board
};

// Machine initialization function
static void s32k3x8evb_init(MachineState *machine)
{
    S32K3X8EVBState *s = S32K3X8EVB_MACHINE(machine);
    MemoryRegion *system_memory = get_system_memory();
    Error *err = NULL;

    // Initialize the memory container
    memory_region_init(&s->container, OBJECT(machine), "s32k3x8evb-container", UINT64_MAX);
    memory_region_add_subregion(system_memory, 0x00000000, &s->container);

    // Initialize the CPU (ARM Cortex-M7)
    object_initialize_child(OBJECT(machine), "armv7m", &s->cpu, TYPE_ARMV7M);
    qdev_prop_set_string(DEVICE(&s->cpu), "cpu-type", ARM_CPU_TYPE_NAME("cortex-m7"));
    qdev_prop_set_uint32(DEVICE(&s->cpu), "num-irq", 240);  // Cortex-M7 supports up to 240 IRQs

    // Realize the CPU
    sysbus_realize(SYS_BUS_DEVICE(&s->cpu), &err);
    if (err) {
        error_report("Failed to initialize CPU: %s", error_get_pretty(err));
        exit(1);
    }

    // Link the CPU to the system memory
    object_property_set_link(OBJECT(&s->cpu), "memory", OBJECT(&s->container), &err);
    if (err) {
        error_report("Failed to link CPU to memory: %s", error_get_pretty(err));
        exit(1);
    }
}

// Machine type initialization
static void s32k3x8evb_machine_class_init(ObjectClass *oc, void *data)
{
    MachineClass *mc = MACHINE_CLASS(oc);

    mc->desc = "NXP S32K3X8EVB-Q289 Board";
    mc->init = s32k3x8evb_init;
    mc->max_cpus = 1;  // Single-core Cortex-M7
}

// Define the board type
static const TypeInfo s32k3x8evb_info = {
    .name = TYPE_S32K3X8EVB_MACHINE,
    .parent = TYPE_MACHINE,
    .instance_size = sizeof(S32K3X8EVBState),
    .class_init = s32k3x8evb_machine_class_init,
};

// Register the board type
static void s32k3x8evb_machine_init(void)
{
    type_register_static(&s32k3x8evb_info);
}

type_init(s32k3x8evb_machine_init);
