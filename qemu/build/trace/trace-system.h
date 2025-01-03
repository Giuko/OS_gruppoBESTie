/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_SYSTEM_GENERATED_TRACERS_H
#define TRACE_SYSTEM_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_BALLOON_EVENT_EVENT;
extern TraceEvent _TRACE_CPU_IN_EVENT;
extern TraceEvent _TRACE_CPU_OUT_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_OPS_READ_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_OPS_WRITE_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_SUBPAGE_READ_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_SUBPAGE_WRITE_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_RAM_DEVICE_READ_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_SYNC_DIRTY_EVENT;
extern TraceEvent _TRACE_FLATVIEW_NEW_EVENT;
extern TraceEvent _TRACE_FLATVIEW_DESTROY_EVENT;
extern TraceEvent _TRACE_FLATVIEW_DESTROY_RCU_EVENT;
extern TraceEvent _TRACE_GLOBAL_DIRTY_CHANGED_EVENT;
extern TraceEvent _TRACE_VM_STOP_FLUSH_ALL_EVENT;
extern TraceEvent _TRACE_VM_STATE_NOTIFY_EVENT;
extern TraceEvent _TRACE_LOAD_FILE_EVENT;
extern TraceEvent _TRACE_RUNSTATE_SET_EVENT;
extern TraceEvent _TRACE_SYSTEM_WAKEUP_REQUEST_EVENT;
extern TraceEvent _TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_EVENT;
extern TraceEvent _TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_EVENT;
extern TraceEvent _TRACE_DIRTYLIMIT_STATE_INITIALIZE_EVENT;
extern TraceEvent _TRACE_DIRTYLIMIT_STATE_FINALIZE_EVENT;
extern TraceEvent _TRACE_DIRTYLIMIT_THROTTLE_PCT_EVENT;
extern TraceEvent _TRACE_DIRTYLIMIT_SET_VCPU_EVENT;
extern TraceEvent _TRACE_DIRTYLIMIT_VCPU_EXECUTE_EVENT;
extern uint16_t _TRACE_BALLOON_EVENT_DSTATE;
extern uint16_t _TRACE_CPU_IN_DSTATE;
extern uint16_t _TRACE_CPU_OUT_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_OPS_READ_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_OPS_WRITE_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_SUBPAGE_READ_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_SUBPAGE_WRITE_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_RAM_DEVICE_READ_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_SYNC_DIRTY_DSTATE;
extern uint16_t _TRACE_FLATVIEW_NEW_DSTATE;
extern uint16_t _TRACE_FLATVIEW_DESTROY_DSTATE;
extern uint16_t _TRACE_FLATVIEW_DESTROY_RCU_DSTATE;
extern uint16_t _TRACE_GLOBAL_DIRTY_CHANGED_DSTATE;
extern uint16_t _TRACE_VM_STOP_FLUSH_ALL_DSTATE;
extern uint16_t _TRACE_VM_STATE_NOTIFY_DSTATE;
extern uint16_t _TRACE_LOAD_FILE_DSTATE;
extern uint16_t _TRACE_RUNSTATE_SET_DSTATE;
extern uint16_t _TRACE_SYSTEM_WAKEUP_REQUEST_DSTATE;
extern uint16_t _TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_DSTATE;
extern uint16_t _TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_DSTATE;
extern uint16_t _TRACE_DIRTYLIMIT_STATE_INITIALIZE_DSTATE;
extern uint16_t _TRACE_DIRTYLIMIT_STATE_FINALIZE_DSTATE;
extern uint16_t _TRACE_DIRTYLIMIT_THROTTLE_PCT_DSTATE;
extern uint16_t _TRACE_DIRTYLIMIT_SET_VCPU_DSTATE;
extern uint16_t _TRACE_DIRTYLIMIT_VCPU_EXECUTE_DSTATE;
#define TRACE_BALLOON_EVENT_ENABLED 1
#define TRACE_CPU_IN_ENABLED 1
#define TRACE_CPU_OUT_ENABLED 1
#define TRACE_MEMORY_REGION_OPS_READ_ENABLED 1
#define TRACE_MEMORY_REGION_OPS_WRITE_ENABLED 1
#define TRACE_MEMORY_REGION_SUBPAGE_READ_ENABLED 1
#define TRACE_MEMORY_REGION_SUBPAGE_WRITE_ENABLED 1
#define TRACE_MEMORY_REGION_RAM_DEVICE_READ_ENABLED 1
#define TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_ENABLED 1
#define TRACE_MEMORY_REGION_SYNC_DIRTY_ENABLED 1
#define TRACE_FLATVIEW_NEW_ENABLED 1
#define TRACE_FLATVIEW_DESTROY_ENABLED 1
#define TRACE_FLATVIEW_DESTROY_RCU_ENABLED 1
#define TRACE_GLOBAL_DIRTY_CHANGED_ENABLED 1
#define TRACE_VM_STOP_FLUSH_ALL_ENABLED 1
#define TRACE_VM_STATE_NOTIFY_ENABLED 1
#define TRACE_LOAD_FILE_ENABLED 1
#define TRACE_RUNSTATE_SET_ENABLED 1
#define TRACE_SYSTEM_WAKEUP_REQUEST_ENABLED 1
#define TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_ENABLED 1
#define TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_ENABLED 1
#define TRACE_DIRTYLIMIT_STATE_INITIALIZE_ENABLED 1
#define TRACE_DIRTYLIMIT_STATE_FINALIZE_ENABLED 1
#define TRACE_DIRTYLIMIT_THROTTLE_PCT_ENABLED 1
#define TRACE_DIRTYLIMIT_SET_VCPU_ENABLED 1
#define TRACE_DIRTYLIMIT_VCPU_EXECUTE_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_BALLOON_EVENT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_BALLOON_EVENT) || \
    false)

static inline void _nocheck__trace_balloon_event(void * opaque, unsigned long addr)
{
    if (trace_event_get_state(TRACE_BALLOON_EVENT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:balloon_event " "opaque %p addr %lu" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , opaque, addr);
#line 106 "trace/trace-system.h"
        } else {
#line 5 "../system/trace-events"
            qemu_log("balloon_event " "opaque %p addr %lu" "\n", opaque, addr);
#line 110 "trace/trace-system.h"
        }
    }
}

static inline void trace_balloon_event(void * opaque, unsigned long addr)
{
    if (true) {
        _nocheck__trace_balloon_event(opaque, addr);
    }
}

#define TRACE_CPU_IN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CPU_IN) || \
    false)

static inline void _nocheck__trace_cpu_in(unsigned int addr, char size, unsigned int val)
{
    if (trace_event_get_state(TRACE_CPU_IN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:cpu_in " "addr 0x%x(%c) value %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, size, val);
#line 137 "trace/trace-system.h"
        } else {
#line 8 "../system/trace-events"
            qemu_log("cpu_in " "addr 0x%x(%c) value %u" "\n", addr, size, val);
#line 141 "trace/trace-system.h"
        }
    }
}

static inline void trace_cpu_in(unsigned int addr, char size, unsigned int val)
{
    if (true) {
        _nocheck__trace_cpu_in(addr, size, val);
    }
}

#define TRACE_CPU_OUT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CPU_OUT) || \
    false)

static inline void _nocheck__trace_cpu_out(unsigned int addr, char size, unsigned int val)
{
    if (trace_event_get_state(TRACE_CPU_OUT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:cpu_out " "addr 0x%x(%c) value %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, size, val);
#line 168 "trace/trace-system.h"
        } else {
#line 9 "../system/trace-events"
            qemu_log("cpu_out " "addr 0x%x(%c) value %u" "\n", addr, size, val);
#line 172 "trace/trace-system.h"
        }
    }
}

static inline void trace_cpu_out(unsigned int addr, char size, unsigned int val)
{
    if (true) {
        _nocheck__trace_cpu_out(addr, size, val);
    }
}

#define TRACE_MEMORY_REGION_OPS_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MEMORY_REGION_OPS_READ) || \
    false)

static inline void _nocheck__trace_memory_region_ops_read(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size, const char * name)
{
    if (trace_event_get_state(TRACE_MEMORY_REGION_OPS_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:memory_region_ops_read " "cpu %d mr %p addr 0x%"PRIx64" value 0x%"PRIx64" size %u name '%s'" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, mr, addr, value, size, name);
#line 199 "trace/trace-system.h"
        } else {
#line 12 "../system/trace-events"
            qemu_log("memory_region_ops_read " "cpu %d mr %p addr 0x%"PRIx64" value 0x%"PRIx64" size %u name '%s'" "\n", cpu_index, mr, addr, value, size, name);
#line 203 "trace/trace-system.h"
        }
    }
}

static inline void trace_memory_region_ops_read(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size, const char * name)
{
    if (true) {
        _nocheck__trace_memory_region_ops_read(cpu_index, mr, addr, value, size, name);
    }
}

#define TRACE_MEMORY_REGION_OPS_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MEMORY_REGION_OPS_WRITE) || \
    false)

static inline void _nocheck__trace_memory_region_ops_write(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size, const char * name)
{
    if (trace_event_get_state(TRACE_MEMORY_REGION_OPS_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:memory_region_ops_write " "cpu %d mr %p addr 0x%"PRIx64" value 0x%"PRIx64" size %u name '%s'" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, mr, addr, value, size, name);
#line 230 "trace/trace-system.h"
        } else {
#line 13 "../system/trace-events"
            qemu_log("memory_region_ops_write " "cpu %d mr %p addr 0x%"PRIx64" value 0x%"PRIx64" size %u name '%s'" "\n", cpu_index, mr, addr, value, size, name);
#line 234 "trace/trace-system.h"
        }
    }
}

static inline void trace_memory_region_ops_write(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size, const char * name)
{
    if (true) {
        _nocheck__trace_memory_region_ops_write(cpu_index, mr, addr, value, size, name);
    }
}

#define TRACE_MEMORY_REGION_SUBPAGE_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MEMORY_REGION_SUBPAGE_READ) || \
    false)

static inline void _nocheck__trace_memory_region_subpage_read(int cpu_index, void * mr, uint64_t offset, uint64_t value, unsigned size)
{
    if (trace_event_get_state(TRACE_MEMORY_REGION_SUBPAGE_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:memory_region_subpage_read " "cpu %d mr %p offset 0x%"PRIx64" value 0x%"PRIx64" size %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, mr, offset, value, size);
#line 261 "trace/trace-system.h"
        } else {
#line 14 "../system/trace-events"
            qemu_log("memory_region_subpage_read " "cpu %d mr %p offset 0x%"PRIx64" value 0x%"PRIx64" size %u" "\n", cpu_index, mr, offset, value, size);
#line 265 "trace/trace-system.h"
        }
    }
}

static inline void trace_memory_region_subpage_read(int cpu_index, void * mr, uint64_t offset, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_memory_region_subpage_read(cpu_index, mr, offset, value, size);
    }
}

#define TRACE_MEMORY_REGION_SUBPAGE_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MEMORY_REGION_SUBPAGE_WRITE) || \
    false)

static inline void _nocheck__trace_memory_region_subpage_write(int cpu_index, void * mr, uint64_t offset, uint64_t value, unsigned size)
{
    if (trace_event_get_state(TRACE_MEMORY_REGION_SUBPAGE_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:memory_region_subpage_write " "cpu %d mr %p offset 0x%"PRIx64" value 0x%"PRIx64" size %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, mr, offset, value, size);
#line 292 "trace/trace-system.h"
        } else {
#line 15 "../system/trace-events"
            qemu_log("memory_region_subpage_write " "cpu %d mr %p offset 0x%"PRIx64" value 0x%"PRIx64" size %u" "\n", cpu_index, mr, offset, value, size);
#line 296 "trace/trace-system.h"
        }
    }
}

static inline void trace_memory_region_subpage_write(int cpu_index, void * mr, uint64_t offset, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_memory_region_subpage_write(cpu_index, mr, offset, value, size);
    }
}

#define TRACE_MEMORY_REGION_RAM_DEVICE_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MEMORY_REGION_RAM_DEVICE_READ) || \
    false)

static inline void _nocheck__trace_memory_region_ram_device_read(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size)
{
    if (trace_event_get_state(TRACE_MEMORY_REGION_RAM_DEVICE_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:memory_region_ram_device_read " "cpu %d mr %p addr 0x%"PRIx64" value 0x%"PRIx64" size %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, mr, addr, value, size);
#line 323 "trace/trace-system.h"
        } else {
#line 16 "../system/trace-events"
            qemu_log("memory_region_ram_device_read " "cpu %d mr %p addr 0x%"PRIx64" value 0x%"PRIx64" size %u" "\n", cpu_index, mr, addr, value, size);
#line 327 "trace/trace-system.h"
        }
    }
}

static inline void trace_memory_region_ram_device_read(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_memory_region_ram_device_read(cpu_index, mr, addr, value, size);
    }
}

#define TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MEMORY_REGION_RAM_DEVICE_WRITE) || \
    false)

static inline void _nocheck__trace_memory_region_ram_device_write(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size)
{
    if (trace_event_get_state(TRACE_MEMORY_REGION_RAM_DEVICE_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:memory_region_ram_device_write " "cpu %d mr %p addr 0x%"PRIx64" value 0x%"PRIx64" size %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, mr, addr, value, size);
#line 354 "trace/trace-system.h"
        } else {
#line 17 "../system/trace-events"
            qemu_log("memory_region_ram_device_write " "cpu %d mr %p addr 0x%"PRIx64" value 0x%"PRIx64" size %u" "\n", cpu_index, mr, addr, value, size);
#line 358 "trace/trace-system.h"
        }
    }
}

static inline void trace_memory_region_ram_device_write(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_memory_region_ram_device_write(cpu_index, mr, addr, value, size);
    }
}

#define TRACE_MEMORY_REGION_SYNC_DIRTY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MEMORY_REGION_SYNC_DIRTY) || \
    false)

static inline void _nocheck__trace_memory_region_sync_dirty(const char * mr, const char * listener, int global)
{
    if (trace_event_get_state(TRACE_MEMORY_REGION_SYNC_DIRTY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:memory_region_sync_dirty " "mr '%s' listener '%s' synced (global=%d)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , mr, listener, global);
#line 385 "trace/trace-system.h"
        } else {
#line 18 "../system/trace-events"
            qemu_log("memory_region_sync_dirty " "mr '%s' listener '%s' synced (global=%d)" "\n", mr, listener, global);
#line 389 "trace/trace-system.h"
        }
    }
}

static inline void trace_memory_region_sync_dirty(const char * mr, const char * listener, int global)
{
    if (true) {
        _nocheck__trace_memory_region_sync_dirty(mr, listener, global);
    }
}

#define TRACE_FLATVIEW_NEW_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_FLATVIEW_NEW) || \
    false)

static inline void _nocheck__trace_flatview_new(void * view, void * root)
{
    if (trace_event_get_state(TRACE_FLATVIEW_NEW) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:flatview_new " "%p (root %p)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , view, root);
#line 416 "trace/trace-system.h"
        } else {
#line 19 "../system/trace-events"
            qemu_log("flatview_new " "%p (root %p)" "\n", view, root);
#line 420 "trace/trace-system.h"
        }
    }
}

static inline void trace_flatview_new(void * view, void * root)
{
    if (true) {
        _nocheck__trace_flatview_new(view, root);
    }
}

#define TRACE_FLATVIEW_DESTROY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_FLATVIEW_DESTROY) || \
    false)

static inline void _nocheck__trace_flatview_destroy(void * view, void * root)
{
    if (trace_event_get_state(TRACE_FLATVIEW_DESTROY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:flatview_destroy " "%p (root %p)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , view, root);
#line 447 "trace/trace-system.h"
        } else {
#line 20 "../system/trace-events"
            qemu_log("flatview_destroy " "%p (root %p)" "\n", view, root);
#line 451 "trace/trace-system.h"
        }
    }
}

static inline void trace_flatview_destroy(void * view, void * root)
{
    if (true) {
        _nocheck__trace_flatview_destroy(view, root);
    }
}

#define TRACE_FLATVIEW_DESTROY_RCU_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_FLATVIEW_DESTROY_RCU) || \
    false)

static inline void _nocheck__trace_flatview_destroy_rcu(void * view, void * root)
{
    if (trace_event_get_state(TRACE_FLATVIEW_DESTROY_RCU) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 21 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:flatview_destroy_rcu " "%p (root %p)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , view, root);
#line 478 "trace/trace-system.h"
        } else {
#line 21 "../system/trace-events"
            qemu_log("flatview_destroy_rcu " "%p (root %p)" "\n", view, root);
#line 482 "trace/trace-system.h"
        }
    }
}

static inline void trace_flatview_destroy_rcu(void * view, void * root)
{
    if (true) {
        _nocheck__trace_flatview_destroy_rcu(view, root);
    }
}

#define TRACE_GLOBAL_DIRTY_CHANGED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GLOBAL_DIRTY_CHANGED) || \
    false)

static inline void _nocheck__trace_global_dirty_changed(unsigned int bitmask)
{
    if (trace_event_get_state(TRACE_GLOBAL_DIRTY_CHANGED) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 22 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:global_dirty_changed " "bitmask 0x%"PRIx32 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , bitmask);
#line 509 "trace/trace-system.h"
        } else {
#line 22 "../system/trace-events"
            qemu_log("global_dirty_changed " "bitmask 0x%"PRIx32 "\n", bitmask);
#line 513 "trace/trace-system.h"
        }
    }
}

static inline void trace_global_dirty_changed(unsigned int bitmask)
{
    if (true) {
        _nocheck__trace_global_dirty_changed(bitmask);
    }
}

#define TRACE_VM_STOP_FLUSH_ALL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VM_STOP_FLUSH_ALL) || \
    false)

static inline void _nocheck__trace_vm_stop_flush_all(int ret)
{
    if (trace_event_get_state(TRACE_VM_STOP_FLUSH_ALL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 25 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:vm_stop_flush_all " "ret %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , ret);
#line 540 "trace/trace-system.h"
        } else {
#line 25 "../system/trace-events"
            qemu_log("vm_stop_flush_all " "ret %d" "\n", ret);
#line 544 "trace/trace-system.h"
        }
    }
}

static inline void trace_vm_stop_flush_all(int ret)
{
    if (true) {
        _nocheck__trace_vm_stop_flush_all(ret);
    }
}

#define TRACE_VM_STATE_NOTIFY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VM_STATE_NOTIFY) || \
    false)

static inline void _nocheck__trace_vm_state_notify(int running, int reason, const char * reason_str)
{
    if (trace_event_get_state(TRACE_VM_STATE_NOTIFY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 28 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:vm_state_notify " "running %d reason %d (%s)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , running, reason, reason_str);
#line 571 "trace/trace-system.h"
        } else {
#line 28 "../system/trace-events"
            qemu_log("vm_state_notify " "running %d reason %d (%s)" "\n", running, reason, reason_str);
#line 575 "trace/trace-system.h"
        }
    }
}

static inline void trace_vm_state_notify(int running, int reason, const char * reason_str)
{
    if (true) {
        _nocheck__trace_vm_state_notify(running, reason, reason_str);
    }
}

#define TRACE_LOAD_FILE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_LOAD_FILE) || \
    false)

static inline void _nocheck__trace_load_file(const char * name, const char * path)
{
    if (trace_event_get_state(TRACE_LOAD_FILE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 29 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:load_file " "name %s location %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , name, path);
#line 602 "trace/trace-system.h"
        } else {
#line 29 "../system/trace-events"
            qemu_log("load_file " "name %s location %s" "\n", name, path);
#line 606 "trace/trace-system.h"
        }
    }
}

static inline void trace_load_file(const char * name, const char * path)
{
    if (true) {
        _nocheck__trace_load_file(name, path);
    }
}

#define TRACE_RUNSTATE_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RUNSTATE_SET) || \
    false)

static inline void _nocheck__trace_runstate_set(int current_state, const char * current_state_str, int new_state, const char * new_state_str)
{
    if (trace_event_get_state(TRACE_RUNSTATE_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 30 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:runstate_set " "current_run_state %d (%s) new_state %d (%s)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , current_state, current_state_str, new_state, new_state_str);
#line 633 "trace/trace-system.h"
        } else {
#line 30 "../system/trace-events"
            qemu_log("runstate_set " "current_run_state %d (%s) new_state %d (%s)" "\n", current_state, current_state_str, new_state, new_state_str);
#line 637 "trace/trace-system.h"
        }
    }
}

static inline void trace_runstate_set(int current_state, const char * current_state_str, int new_state, const char * new_state_str)
{
    if (true) {
        _nocheck__trace_runstate_set(current_state, current_state_str, new_state, new_state_str);
    }
}

#define TRACE_SYSTEM_WAKEUP_REQUEST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SYSTEM_WAKEUP_REQUEST) || \
    false)

static inline void _nocheck__trace_system_wakeup_request(int reason)
{
    if (trace_event_get_state(TRACE_SYSTEM_WAKEUP_REQUEST) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 31 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:system_wakeup_request " "reason=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , reason);
#line 664 "trace/trace-system.h"
        } else {
#line 31 "../system/trace-events"
            qemu_log("system_wakeup_request " "reason=%d" "\n", reason);
#line 668 "trace/trace-system.h"
        }
    }
}

static inline void trace_system_wakeup_request(int reason)
{
    if (true) {
        _nocheck__trace_system_wakeup_request(reason);
    }
}

#define TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST) || \
    false)

static inline void _nocheck__trace_qemu_system_shutdown_request(int reason)
{
    if (trace_event_get_state(TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 32 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:qemu_system_shutdown_request " "reason=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , reason);
#line 695 "trace/trace-system.h"
        } else {
#line 32 "../system/trace-events"
            qemu_log("qemu_system_shutdown_request " "reason=%d" "\n", reason);
#line 699 "trace/trace-system.h"
        }
    }
}

static inline void trace_qemu_system_shutdown_request(int reason)
{
    if (true) {
        _nocheck__trace_qemu_system_shutdown_request(reason);
    }
}

#define TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST) || \
    false)

static inline void _nocheck__trace_qemu_system_powerdown_request(void)
{
    if (trace_event_get_state(TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 33 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:qemu_system_powerdown_request " "" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 726 "trace/trace-system.h"
        } else {
#line 33 "../system/trace-events"
            qemu_log("qemu_system_powerdown_request " "" "\n");
#line 730 "trace/trace-system.h"
        }
    }
}

static inline void trace_qemu_system_powerdown_request(void)
{
    if (true) {
        _nocheck__trace_qemu_system_powerdown_request();
    }
}

#define TRACE_DIRTYLIMIT_STATE_INITIALIZE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DIRTYLIMIT_STATE_INITIALIZE) || \
    false)

static inline void _nocheck__trace_dirtylimit_state_initialize(int max_cpus)
{
    if (trace_event_get_state(TRACE_DIRTYLIMIT_STATE_INITIALIZE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 36 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:dirtylimit_state_initialize " "dirtylimit state initialize: max cpus %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , max_cpus);
#line 757 "trace/trace-system.h"
        } else {
#line 36 "../system/trace-events"
            qemu_log("dirtylimit_state_initialize " "dirtylimit state initialize: max cpus %d" "\n", max_cpus);
#line 761 "trace/trace-system.h"
        }
    }
}

static inline void trace_dirtylimit_state_initialize(int max_cpus)
{
    if (true) {
        _nocheck__trace_dirtylimit_state_initialize(max_cpus);
    }
}

#define TRACE_DIRTYLIMIT_STATE_FINALIZE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DIRTYLIMIT_STATE_FINALIZE) || \
    false)

static inline void _nocheck__trace_dirtylimit_state_finalize(void)
{
    if (trace_event_get_state(TRACE_DIRTYLIMIT_STATE_FINALIZE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 37 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:dirtylimit_state_finalize "  "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 788 "trace/trace-system.h"
        } else {
#line 37 "../system/trace-events"
            qemu_log("dirtylimit_state_finalize "  "\n");
#line 792 "trace/trace-system.h"
        }
    }
}

static inline void trace_dirtylimit_state_finalize(void)
{
    if (true) {
        _nocheck__trace_dirtylimit_state_finalize();
    }
}

#define TRACE_DIRTYLIMIT_THROTTLE_PCT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DIRTYLIMIT_THROTTLE_PCT) || \
    false)

static inline void _nocheck__trace_dirtylimit_throttle_pct(int cpu_index, uint64_t pct, int64_t time_us)
{
    if (trace_event_get_state(TRACE_DIRTYLIMIT_THROTTLE_PCT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 38 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:dirtylimit_throttle_pct " "CPU[%d] throttle percent: %" PRIu64 ", throttle adjust time %"PRIi64 " us" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, pct, time_us);
#line 819 "trace/trace-system.h"
        } else {
#line 38 "../system/trace-events"
            qemu_log("dirtylimit_throttle_pct " "CPU[%d] throttle percent: %" PRIu64 ", throttle adjust time %"PRIi64 " us" "\n", cpu_index, pct, time_us);
#line 823 "trace/trace-system.h"
        }
    }
}

static inline void trace_dirtylimit_throttle_pct(int cpu_index, uint64_t pct, int64_t time_us)
{
    if (true) {
        _nocheck__trace_dirtylimit_throttle_pct(cpu_index, pct, time_us);
    }
}

#define TRACE_DIRTYLIMIT_SET_VCPU_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DIRTYLIMIT_SET_VCPU) || \
    false)

static inline void _nocheck__trace_dirtylimit_set_vcpu(int cpu_index, uint64_t quota)
{
    if (trace_event_get_state(TRACE_DIRTYLIMIT_SET_VCPU) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 39 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:dirtylimit_set_vcpu " "CPU[%d] set dirty page rate limit %"PRIu64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, quota);
#line 850 "trace/trace-system.h"
        } else {
#line 39 "../system/trace-events"
            qemu_log("dirtylimit_set_vcpu " "CPU[%d] set dirty page rate limit %"PRIu64 "\n", cpu_index, quota);
#line 854 "trace/trace-system.h"
        }
    }
}

static inline void trace_dirtylimit_set_vcpu(int cpu_index, uint64_t quota)
{
    if (true) {
        _nocheck__trace_dirtylimit_set_vcpu(cpu_index, quota);
    }
}

#define TRACE_DIRTYLIMIT_VCPU_EXECUTE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DIRTYLIMIT_VCPU_EXECUTE) || \
    false)

static inline void _nocheck__trace_dirtylimit_vcpu_execute(int cpu_index, int64_t sleep_time_us)
{
    if (trace_event_get_state(TRACE_DIRTYLIMIT_VCPU_EXECUTE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 40 "../system/trace-events"
            qemu_log("%d@%zu.%06zu:dirtylimit_vcpu_execute " "CPU[%d] sleep %"PRIi64 " us" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, sleep_time_us);
#line 881 "trace/trace-system.h"
        } else {
#line 40 "../system/trace-events"
            qemu_log("dirtylimit_vcpu_execute " "CPU[%d] sleep %"PRIi64 " us" "\n", cpu_index, sleep_time_us);
#line 885 "trace/trace-system.h"
        }
    }
}

static inline void trace_dirtylimit_vcpu_execute(int cpu_index, int64_t sleep_time_us)
{
    if (true) {
        _nocheck__trace_dirtylimit_vcpu_execute(cpu_index, sleep_time_us);
    }
}
#endif /* TRACE_SYSTEM_GENERATED_TRACERS_H */
