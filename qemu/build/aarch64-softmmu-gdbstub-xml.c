#include "qemu/osdep.h"
#include "exec/gdbstub.h"

const GDBFeature gdb_static_features[] = {
    {
        "aarch64-core.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2009-2012 Free Software Foundation, Inc.\n"
        "     Contributed by ARM Ltd.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.aarch64.core\">\n"
        "  <reg name=\"x0\" bitsize=\"64\"/>\n"
        "  <reg name=\"x1\" bitsize=\"64\"/>\n"
        "  <reg name=\"x2\" bitsize=\"64\"/>\n"
        "  <reg name=\"x3\" bitsize=\"64\"/>\n"
        "  <reg name=\"x4\" bitsize=\"64\"/>\n"
        "  <reg name=\"x5\" bitsize=\"64\"/>\n"
        "  <reg name=\"x6\" bitsize=\"64\"/>\n"
        "  <reg name=\"x7\" bitsize=\"64\"/>\n"
        "  <reg name=\"x8\" bitsize=\"64\"/>\n"
        "  <reg name=\"x9\" bitsize=\"64\"/>\n"
        "  <reg name=\"x10\" bitsize=\"64\"/>\n"
        "  <reg name=\"x11\" bitsize=\"64\"/>\n"
        "  <reg name=\"x12\" bitsize=\"64\"/>\n"
        "  <reg name=\"x13\" bitsize=\"64\"/>\n"
        "  <reg name=\"x14\" bitsize=\"64\"/>\n"
        "  <reg name=\"x15\" bitsize=\"64\"/>\n"
        "  <reg name=\"x16\" bitsize=\"64\"/>\n"
        "  <reg name=\"x17\" bitsize=\"64\"/>\n"
        "  <reg name=\"x18\" bitsize=\"64\"/>\n"
        "  <reg name=\"x19\" bitsize=\"64\"/>\n"
        "  <reg name=\"x20\" bitsize=\"64\"/>\n"
        "  <reg name=\"x21\" bitsize=\"64\"/>\n"
        "  <reg name=\"x22\" bitsize=\"64\"/>\n"
        "  <reg name=\"x23\" bitsize=\"64\"/>\n"
        "  <reg name=\"x24\" bitsize=\"64\"/>\n"
        "  <reg name=\"x25\" bitsize=\"64\"/>\n"
        "  <reg name=\"x26\" bitsize=\"64\"/>\n"
        "  <reg name=\"x27\" bitsize=\"64\"/>\n"
        "  <reg name=\"x28\" bitsize=\"64\"/>\n"
        "  <reg name=\"x29\" bitsize=\"64\"/>\n"
        "  <reg name=\"x30\" bitsize=\"64\"/>\n"
        "  <reg name=\"sp\" bitsize=\"64\" type=\"data_ptr\"/>\n"
        "\n"
        "  <reg name=\"pc\" bitsize=\"64\" type=\"code_ptr\"/>\n"
        "  <reg name=\"cpsr\" bitsize=\"32\"/>\n"
        "</feature>\n",
        34,
    },
    {
        "aarch64-fpu.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2009-2012 Free Software Foundation, Inc.\n"
        "     Contributed by ARM Ltd.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.aarch64.fpu\">\n"
        "  <vector id=\"v2d\" type=\"ieee_double\" count=\"2\"/>\n"
        "  <vector id=\"v2u\" type=\"uint64\" count=\"2\"/>\n"
        "  <vector id=\"v2i\" type=\"int64\" count=\"2\"/>\n"
        "  <vector id=\"v4f\" type=\"ieee_single\" count=\"4\"/>\n"
        "  <vector id=\"v4u\" type=\"uint32\" count=\"4\"/>\n"
        "  <vector id=\"v4i\" type=\"int32\" count=\"4\"/>\n"
        "  <vector id=\"v8u\" type=\"uint16\" count=\"8\"/>\n"
        "  <vector id=\"v8i\" type=\"int16\" count=\"8\"/>\n"
        "  <vector id=\"v16u\" type=\"uint8\" count=\"16\"/>\n"
        "  <vector id=\"v16i\" type=\"int8\" count=\"16\"/>\n"
        "  <vector id=\"v1u\" type=\"uint128\" count=\"1\"/>\n"
        "  <vector id=\"v1i\" type=\"int128\" count=\"1\"/>\n"
        "  <union id=\"vnd\">\n"
        "    <field name=\"f\" type=\"v2d\"/>\n"
        "    <field name=\"u\" type=\"v2u\"/>\n"
        "    <field name=\"s\" type=\"v2i\"/>\n"
        "  </union>\n"
        "  <union id=\"vns\">\n"
        "    <field name=\"f\" type=\"v4f\"/>\n"
        "    <field name=\"u\" type=\"v4u\"/>\n"
        "    <field name=\"s\" type=\"v4i\"/>\n"
        "  </union>\n"
        "  <union id=\"vnh\">\n"
        "    <field name=\"u\" type=\"v8u\"/>\n"
        "    <field name=\"s\" type=\"v8i\"/>\n"
        "  </union>\n"
        "  <union id=\"vnb\">\n"
        "    <field name=\"u\" type=\"v16u\"/>\n"
        "    <field name=\"s\" type=\"v16i\"/>\n"
        "  </union>\n"
        "  <union id=\"vnq\">\n"
        "    <field name=\"u\" type=\"v1u\"/>\n"
        "    <field name=\"s\" type=\"v1i\"/>\n"
        "  </union>\n"
        "  <union id=\"aarch64v\">\n"
        "    <field name=\"d\" type=\"vnd\"/>\n"
        "    <field name=\"s\" type=\"vns\"/>\n"
        "    <field name=\"h\" type=\"vnh\"/>\n"
        "    <field name=\"b\" type=\"vnb\"/>\n"
        "    <field name=\"q\" type=\"vnq\"/>\n"
        "  </union>\n"
        "  <reg name=\"v0\" bitsize=\"128\" type=\"aarch64v\" regnum=\"34\"/>\n"
        "  <reg name=\"v1\" bitsize=\"128\" type=\"aarch64v\" />\n"
        "  <reg name=\"v2\" bitsize=\"128\" type=\"aarch64v\" />\n"
        "  <reg name=\"v3\" bitsize=\"128\" type=\"aarch64v\" />\n"
        "  <reg name=\"v4\" bitsize=\"128\" type=\"aarch64v\" />\n"
        "  <reg name=\"v5\" bitsize=\"128\" type=\"aarch64v\" />\n"
        "  <reg name=\"v6\" bitsize=\"128\" type=\"aarch64v\" />\n"
        "  <reg name=\"v7\" bitsize=\"128\" type=\"aarch64v\" />\n"
        "  <reg name=\"v8\" bitsize=\"128\" type=\"aarch64v\" />\n"
        "  <reg name=\"v9\" bitsize=\"128\" type=\"aarch64v\" />\n"
        "  <reg name=\"v10\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v11\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v12\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v13\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v14\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v15\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v16\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v17\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v18\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v19\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v20\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v21\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v22\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v23\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v24\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v25\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v26\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v27\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v28\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v29\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v30\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"v31\" bitsize=\"128\" type=\"aarch64v\"/>\n"
        "  <reg name=\"fpsr\" bitsize=\"32\"/>\n"
        "  <reg name=\"fpcr\" bitsize=\"32\"/>\n"
        "</feature>\n",
        34,
    },
    {
        "arm-core.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2008 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.arm.core\">\n"
        "  <reg name=\"r0\" bitsize=\"32\"/>\n"
        "  <reg name=\"r1\" bitsize=\"32\"/>\n"
        "  <reg name=\"r2\" bitsize=\"32\"/>\n"
        "  <reg name=\"r3\" bitsize=\"32\"/>\n"
        "  <reg name=\"r4\" bitsize=\"32\"/>\n"
        "  <reg name=\"r5\" bitsize=\"32\"/>\n"
        "  <reg name=\"r6\" bitsize=\"32\"/>\n"
        "  <reg name=\"r7\" bitsize=\"32\"/>\n"
        "  <reg name=\"r8\" bitsize=\"32\"/>\n"
        "  <reg name=\"r9\" bitsize=\"32\"/>\n"
        "  <reg name=\"r10\" bitsize=\"32\"/>\n"
        "  <reg name=\"r11\" bitsize=\"32\"/>\n"
        "  <reg name=\"r12\" bitsize=\"32\"/>\n"
        "  <reg name=\"sp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"lr\" bitsize=\"32\"/>\n"
        "  <reg name=\"pc\" bitsize=\"32\" type=\"code_ptr\"/>\n"
        "\n"
        "  <!-- The CPSR is register 25, rather than register 16, because\n"
        "       the FPA registers historically were placed between the PC\n"
        "       and the CPSR in the \"g\" packet.  -->\n"
        "  <reg name=\"cpsr\" bitsize=\"32\" regnum=\"25\"/>\n"
        "</feature>\n",
        26,
    },
    {
        "arm-vfp.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2008 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.arm.vfp\">\n"
        "  <reg name=\"d0\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d1\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d2\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d3\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d4\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d5\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d6\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d7\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d8\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d9\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d10\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d11\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d12\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d13\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d14\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d15\" bitsize=\"64\" type=\"float\"/>\n"
        "\n"
        "  <reg name=\"fpscr\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "</feature>\n",
        17,
    },
    {
        "arm-vfp3.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2008 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.arm.vfp\">\n"
        "  <reg name=\"d0\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d1\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d2\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d3\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d4\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d5\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d6\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d7\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d8\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d9\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d10\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d11\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d12\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d13\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d14\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d15\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d16\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d17\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d18\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d19\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d20\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d21\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d22\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d23\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d24\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d25\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d26\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d27\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d28\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d29\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d30\" bitsize=\"64\" type=\"float\"/>\n"
        "  <reg name=\"d31\" bitsize=\"64\" type=\"float\"/>\n"
        "\n"
        "  <reg name=\"fpscr\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "</feature>\n",
        33,
    },
    {
        "arm-vfp-sysregs.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2021 Linaro Ltd.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.\n"
        "\n"
        "     These are A/R profile VFP system registers. Debugger users probably\n"
        "     don't really care about these, but because we used to (incorrectly)\n"
        "     provide them to gdb in the org.gnu.gdb.arm.vfp XML we continue\n"
        "     to do so via this separate XML.\n"
        "     -->\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.qemu.gdb.arm.vfp-sysregs\">\n"
        "  <reg name=\"fpsid\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"fpexc\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "</feature>\n",
        2,
    },
    {
        "arm-neon.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2008 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.arm.vfp\">\n"
        "  <vector id=\"neon_uint8x8\" type=\"uint8\" count=\"8\"/>\n"
        "  <vector id=\"neon_uint16x4\" type=\"uint16\" count=\"4\"/>\n"
        "  <vector id=\"neon_uint32x2\" type=\"uint32\" count=\"2\"/>\n"
        "  <vector id=\"neon_float32x2\" type=\"ieee_single\" count=\"2\"/>\n"
        "  <union id=\"neon_d\">\n"
        "    <field name=\"u8\" type=\"neon_uint8x8\"/>\n"
        "    <field name=\"u16\" type=\"neon_uint16x4\"/>\n"
        "    <field name=\"u32\" type=\"neon_uint32x2\"/>\n"
        "    <field name=\"u64\" type=\"uint64\"/>\n"
        "    <field name=\"f32\" type=\"neon_float32x2\"/>\n"
        "    <field name=\"f64\" type=\"ieee_double\"/>\n"
        "  </union>\n"
        "  <vector id=\"neon_uint8x16\" type=\"uint8\" count=\"16\"/>\n"
        "  <vector id=\"neon_uint16x8\" type=\"uint16\" count=\"8\"/>\n"
        "  <vector id=\"neon_uint32x4\" type=\"uint32\" count=\"4\"/>\n"
        "  <vector id=\"neon_uint64x2\" type=\"uint64\" count=\"2\"/>\n"
        "  <vector id=\"neon_float32x4\" type=\"ieee_single\" count=\"4\"/>\n"
        "  <vector id=\"neon_float64x2\" type=\"ieee_double\" count=\"2\"/>\n"
        "  <union id=\"neon_q\">\n"
        "    <field name=\"u8\" type=\"neon_uint8x16\"/>\n"
        "    <field name=\"u16\" type=\"neon_uint16x8\"/>\n"
        "    <field name=\"u32\" type=\"neon_uint32x4\"/>\n"
        "    <field name=\"u64\" type=\"neon_uint64x2\"/>\n"
        "    <field name=\"f32\" type=\"neon_float32x4\"/>\n"
        "    <field name=\"f64\" type=\"neon_float64x2\"/>\n"
        "  </union>\n"
        "  <reg name=\"d0\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d1\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d2\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d3\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d4\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d5\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d6\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d7\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d8\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d9\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d10\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d11\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d12\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d13\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d14\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d15\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d16\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d17\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d18\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d19\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d20\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d21\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d22\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d23\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d24\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d25\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d26\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d27\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d28\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d29\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d30\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "  <reg name=\"d31\" bitsize=\"64\" type=\"neon_d\"/>\n"
        "\n"
        "  <reg name=\"q0\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q1\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q2\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q3\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q4\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q5\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q6\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q7\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q8\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q9\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q10\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q11\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q12\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q13\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q14\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "  <reg name=\"q15\" bitsize=\"128\" type=\"neon_q\"/>\n"
        "\n"
        "  <reg name=\"fpscr\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "</feature>\n",
        49,
    },
    {
        "arm-m-profile.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2010-2020 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.arm.m-profile\">\n"
        "  <reg name=\"r0\" bitsize=\"32\"/>\n"
        "  <reg name=\"r1\" bitsize=\"32\"/>\n"
        "  <reg name=\"r2\" bitsize=\"32\"/>\n"
        "  <reg name=\"r3\" bitsize=\"32\"/>\n"
        "  <reg name=\"r4\" bitsize=\"32\"/>\n"
        "  <reg name=\"r5\" bitsize=\"32\"/>\n"
        "  <reg name=\"r6\" bitsize=\"32\"/>\n"
        "  <reg name=\"r7\" bitsize=\"32\"/>\n"
        "  <reg name=\"r8\" bitsize=\"32\"/>\n"
        "  <reg name=\"r9\" bitsize=\"32\"/>\n"
        "  <reg name=\"r10\" bitsize=\"32\"/>\n"
        "  <reg name=\"r11\" bitsize=\"32\"/>\n"
        "  <reg name=\"r12\" bitsize=\"32\"/>\n"
        "  <reg name=\"sp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"lr\" bitsize=\"32\"/>\n"
        "  <reg name=\"pc\" bitsize=\"32\" type=\"code_ptr\"/>\n"
        "  <reg name=\"xpsr\" bitsize=\"32\" regnum=\"25\"/>\n"
        "</feature>\n",
        26,
    },
    {
        "arm-m-profile-mve.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2021 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.arm.m-profile-mve\">\n"
        "  <flags id=\"vpr_reg\" size=\"4\">\n"
        "    <!-- ARMv8.1-M and MVE: Unprivileged and privileged Access.  -->\n"
        "    <field name=\"P0\" start=\"0\" end=\"15\"/>\n"
        "    <!-- ARMv8.1-M: Privileged Access only.  -->\n"
        "    <field name=\"MASK01\" start=\"16\" end=\"19\"/>\n"
        "    <!-- ARMv8.1-M: Privileged Access only.  -->\n"
        "    <field name=\"MASK23\" start=\"20\" end=\"23\"/>\n"
        "  </flags>\n"
        "  <reg name=\"vpr\" bitsize=\"32\" type=\"vpr_reg\"/>\n"
        "</feature>\n",
        1,
    },
    {
        "aarch64-pauth.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2018-2022 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.aarch64.pauth_v2\">\n"
        "  <reg name=\"pauth_dmask\" bitsize=\"64\"/>\n"
        "  <reg name=\"pauth_cmask\" bitsize=\"64\"/>\n"
        "  <reg name=\"pauth_dmask_high\" bitsize=\"64\"/>\n"
        "  <reg name=\"pauth_cmask_high\" bitsize=\"64\"/>\n"
        "</feature>\n"
        "\n",
        4,
    },
    { NULL }
};
