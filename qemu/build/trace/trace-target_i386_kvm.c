/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-target_i386_kvm.h"

uint16_t _TRACE_KVM_X86_FIXUP_MSI_ERROR_DSTATE;
uint16_t _TRACE_KVM_X86_ADD_MSI_ROUTE_DSTATE;
uint16_t _TRACE_KVM_X86_REMOVE_MSI_ROUTE_DSTATE;
uint16_t _TRACE_KVM_X86_UPDATE_MSI_ROUTES_DSTATE;
uint16_t _TRACE_KVM_XEN_HYPERCALL_DSTATE;
uint16_t _TRACE_KVM_XEN_SOFT_RESET_DSTATE;
uint16_t _TRACE_KVM_XEN_SET_SHARED_INFO_DSTATE;
uint16_t _TRACE_KVM_XEN_SET_VCPU_ATTR_DSTATE;
uint16_t _TRACE_KVM_XEN_SET_VCPU_CALLBACK_DSTATE;
TraceEvent _TRACE_KVM_X86_FIXUP_MSI_ERROR_EVENT = {
    .id = 0,
    .name = "kvm_x86_fixup_msi_error",
    .sstate = TRACE_KVM_X86_FIXUP_MSI_ERROR_ENABLED,
    .dstate = &_TRACE_KVM_X86_FIXUP_MSI_ERROR_DSTATE 
};
TraceEvent _TRACE_KVM_X86_ADD_MSI_ROUTE_EVENT = {
    .id = 0,
    .name = "kvm_x86_add_msi_route",
    .sstate = TRACE_KVM_X86_ADD_MSI_ROUTE_ENABLED,
    .dstate = &_TRACE_KVM_X86_ADD_MSI_ROUTE_DSTATE 
};
TraceEvent _TRACE_KVM_X86_REMOVE_MSI_ROUTE_EVENT = {
    .id = 0,
    .name = "kvm_x86_remove_msi_route",
    .sstate = TRACE_KVM_X86_REMOVE_MSI_ROUTE_ENABLED,
    .dstate = &_TRACE_KVM_X86_REMOVE_MSI_ROUTE_DSTATE 
};
TraceEvent _TRACE_KVM_X86_UPDATE_MSI_ROUTES_EVENT = {
    .id = 0,
    .name = "kvm_x86_update_msi_routes",
    .sstate = TRACE_KVM_X86_UPDATE_MSI_ROUTES_ENABLED,
    .dstate = &_TRACE_KVM_X86_UPDATE_MSI_ROUTES_DSTATE 
};
TraceEvent _TRACE_KVM_XEN_HYPERCALL_EVENT = {
    .id = 0,
    .name = "kvm_xen_hypercall",
    .sstate = TRACE_KVM_XEN_HYPERCALL_ENABLED,
    .dstate = &_TRACE_KVM_XEN_HYPERCALL_DSTATE 
};
TraceEvent _TRACE_KVM_XEN_SOFT_RESET_EVENT = {
    .id = 0,
    .name = "kvm_xen_soft_reset",
    .sstate = TRACE_KVM_XEN_SOFT_RESET_ENABLED,
    .dstate = &_TRACE_KVM_XEN_SOFT_RESET_DSTATE 
};
TraceEvent _TRACE_KVM_XEN_SET_SHARED_INFO_EVENT = {
    .id = 0,
    .name = "kvm_xen_set_shared_info",
    .sstate = TRACE_KVM_XEN_SET_SHARED_INFO_ENABLED,
    .dstate = &_TRACE_KVM_XEN_SET_SHARED_INFO_DSTATE 
};
TraceEvent _TRACE_KVM_XEN_SET_VCPU_ATTR_EVENT = {
    .id = 0,
    .name = "kvm_xen_set_vcpu_attr",
    .sstate = TRACE_KVM_XEN_SET_VCPU_ATTR_ENABLED,
    .dstate = &_TRACE_KVM_XEN_SET_VCPU_ATTR_DSTATE 
};
TraceEvent _TRACE_KVM_XEN_SET_VCPU_CALLBACK_EVENT = {
    .id = 0,
    .name = "kvm_xen_set_vcpu_callback",
    .sstate = TRACE_KVM_XEN_SET_VCPU_CALLBACK_ENABLED,
    .dstate = &_TRACE_KVM_XEN_SET_VCPU_CALLBACK_DSTATE 
};
TraceEvent *target_i386_kvm_trace_events[] = {
    &_TRACE_KVM_X86_FIXUP_MSI_ERROR_EVENT,
    &_TRACE_KVM_X86_ADD_MSI_ROUTE_EVENT,
    &_TRACE_KVM_X86_REMOVE_MSI_ROUTE_EVENT,
    &_TRACE_KVM_X86_UPDATE_MSI_ROUTES_EVENT,
    &_TRACE_KVM_XEN_HYPERCALL_EVENT,
    &_TRACE_KVM_XEN_SOFT_RESET_EVENT,
    &_TRACE_KVM_XEN_SET_SHARED_INFO_EVENT,
    &_TRACE_KVM_XEN_SET_VCPU_ATTR_EVENT,
    &_TRACE_KVM_XEN_SET_VCPU_CALLBACK_EVENT,
  NULL,
};

static void trace_target_i386_kvm_register_events(void)
{
    trace_event_register_group(target_i386_kvm_trace_events);
}
trace_init(trace_target_i386_kvm_register_events)