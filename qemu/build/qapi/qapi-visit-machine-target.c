/* AUTOMATICALLY GENERATED by qapi-gen.py DO NOT MODIFY */

/*
 * Schema-defined QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qapi/qmp/qerror.h"
#include "qapi-visit-machine-target.h"

bool visit_type_CpuModelInfo_members(Visitor *v, CpuModelInfo *obj, Error **errp)
{
    bool has_props = !!obj->props;

    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "props", &has_props)) {
        if (!visit_type_any(v, "props", &obj->props, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_CpuModelInfo(Visitor *v, const char *name,
                 CpuModelInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuModelInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuModelInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuModelInfo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CpuModelExpansionType(Visitor *v, const char *name,
                 CpuModelExpansionType *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &CpuModelExpansionType_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_CpuModelCompareResult(Visitor *v, const char *name,
                 CpuModelCompareResult *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &CpuModelCompareResult_lookup, errp);
    *obj = value;
    return ok;
}

#if defined(TARGET_S390X)
bool visit_type_CpuModelBaselineInfo_members(Visitor *v, CpuModelBaselineInfo *obj, Error **errp)
{
    if (!visit_type_CpuModelInfo(v, "model", &obj->model, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuModelBaselineInfo(Visitor *v, const char *name,
                 CpuModelBaselineInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuModelBaselineInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuModelBaselineInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuModelBaselineInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
bool visit_type_CpuModelCompareInfo_members(Visitor *v, CpuModelCompareInfo *obj, Error **errp)
{
    if (!visit_type_CpuModelCompareResult(v, "result", &obj->result, errp)) {
        return false;
    }
    if (!visit_type_strList(v, "responsible-properties", &obj->responsible_properties, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuModelCompareInfo(Visitor *v, const char *name,
                 CpuModelCompareInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuModelCompareInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuModelCompareInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuModelCompareInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
bool visit_type_q_obj_query_cpu_model_comparison_arg_members(Visitor *v, q_obj_query_cpu_model_comparison_arg *obj, Error **errp)
{
    if (!visit_type_CpuModelInfo(v, "modela", &obj->modela, errp)) {
        return false;
    }
    if (!visit_type_CpuModelInfo(v, "modelb", &obj->modelb, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
bool visit_type_q_obj_query_cpu_model_baseline_arg_members(Visitor *v, q_obj_query_cpu_model_baseline_arg *obj, Error **errp)
{
    if (!visit_type_CpuModelInfo(v, "modela", &obj->modela, errp)) {
        return false;
    }
    if (!visit_type_CpuModelInfo(v, "modelb", &obj->modelb, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) || defined(TARGET_LOONGARCH64) || defined(TARGET_RISCV)
bool visit_type_CpuModelExpansionInfo_members(Visitor *v, CpuModelExpansionInfo *obj, Error **errp)
{
    if (!visit_type_CpuModelInfo(v, "model", &obj->model, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuModelExpansionInfo(Visitor *v, const char *name,
                 CpuModelExpansionInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuModelExpansionInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuModelExpansionInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuModelExpansionInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) || defined(TARGET_LOONGARCH64) || defined(TARGET_RISCV) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) || defined(TARGET_LOONGARCH64) || defined(TARGET_RISCV)
bool visit_type_q_obj_query_cpu_model_expansion_arg_members(Visitor *v, q_obj_query_cpu_model_expansion_arg *obj, Error **errp)
{
    if (!visit_type_CpuModelExpansionType(v, "type", &obj->type, errp)) {
        return false;
    }
    if (!visit_type_CpuModelInfo(v, "model", &obj->model, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) || defined(TARGET_LOONGARCH64) || defined(TARGET_RISCV) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) || defined(TARGET_RISCV)
bool visit_type_CpuDefinitionInfo_members(Visitor *v, CpuDefinitionInfo *obj, Error **errp)
{
    bool has_alias_of = !!obj->alias_of;

    if (!visit_type_str(v, "name", &obj->name, errp)) {
        return false;
    }
    if (visit_optional(v, "migration-safe", &obj->has_migration_safe)) {
        if (!visit_type_bool(v, "migration-safe", &obj->migration_safe, errp)) {
            return false;
        }
    }
    if (!visit_type_bool(v, "static", &obj->q_static, errp)) {
        return false;
    }
    if (visit_optional(v, "unavailable-features", &obj->has_unavailable_features)) {
        if (!visit_type_strList(v, "unavailable-features", &obj->unavailable_features, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "typename", &obj->q_typename, errp)) {
        return false;
    }
    if (visit_optional(v, "alias-of", &has_alias_of)) {
        if (!visit_type_str(v, "alias-of", &obj->alias_of, errp)) {
            return false;
        }
    }
    if (!visit_type_bool(v, "deprecated", &obj->deprecated, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuDefinitionInfo(Visitor *v, const char *name,
                 CpuDefinitionInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuDefinitionInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuDefinitionInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuDefinitionInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) || defined(TARGET_RISCV) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) || defined(TARGET_RISCV)
bool visit_type_CpuDefinitionInfoList(Visitor *v, const char *name,
                 CpuDefinitionInfoList **obj, Error **errp)
{
    bool ok = false;
    CpuDefinitionInfoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (CpuDefinitionInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_CpuDefinitionInfo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuDefinitionInfoList(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) || defined(TARGET_RISCV) */

#if defined(TARGET_S390X)
bool visit_type_CpuS390Polarization(Visitor *v, const char *name,
                 CpuS390Polarization *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &CpuS390Polarization_lookup, errp);
    *obj = value;
    return ok;
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X) && defined(CONFIG_KVM)
bool visit_type_q_obj_set_cpu_topology_arg_members(Visitor *v, q_obj_set_cpu_topology_arg *obj, Error **errp)
{
    if (!visit_type_uint16(v, "core-id", &obj->core_id, errp)) {
        return false;
    }
    if (visit_optional(v, "socket-id", &obj->has_socket_id)) {
        if (!visit_type_uint16(v, "socket-id", &obj->socket_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "book-id", &obj->has_book_id)) {
        if (!visit_type_uint16(v, "book-id", &obj->book_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "drawer-id", &obj->has_drawer_id)) {
        if (!visit_type_uint16(v, "drawer-id", &obj->drawer_id, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "entitlement", &obj->has_entitlement)) {
        if (!visit_type_CpuS390Entitlement(v, "entitlement", &obj->entitlement, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "dedicated", &obj->has_dedicated)) {
        if (!visit_type_bool(v, "dedicated", &obj->dedicated, errp)) {
            return false;
        }
    }
    return true;
}
#endif /* defined(TARGET_S390X) && defined(CONFIG_KVM) */

#if defined(TARGET_S390X) && defined(CONFIG_KVM)
bool visit_type_q_obj_CPU_POLARIZATION_CHANGE_arg_members(Visitor *v, q_obj_CPU_POLARIZATION_CHANGE_arg *obj, Error **errp)
{
    if (!visit_type_CpuS390Polarization(v, "polarization", &obj->polarization, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(TARGET_S390X) && defined(CONFIG_KVM) */

#if defined(TARGET_S390X) && defined(CONFIG_KVM)
bool visit_type_CpuPolarizationInfo_members(Visitor *v, CpuPolarizationInfo *obj, Error **errp)
{
    if (!visit_type_CpuS390Polarization(v, "polarization", &obj->polarization, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CpuPolarizationInfo(Visitor *v, const char *name,
                 CpuPolarizationInfo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CpuPolarizationInfo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CpuPolarizationInfo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CpuPolarizationInfo(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TARGET_S390X) && defined(CONFIG_KVM) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_machine_target_c;
