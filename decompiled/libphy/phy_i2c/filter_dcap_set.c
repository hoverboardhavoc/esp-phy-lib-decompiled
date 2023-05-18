/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_i2c.o -> filter_dcap_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void filter_dcap_set(void)

{
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x14,DAT_000110f1,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x15,DAT_000110f1,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x16,DAT_000110f2,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x17,DAT_000110f2,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x18,DAT_000110f1,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x19,DAT_000110f1,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1c,DAT_000110f4,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1d,DAT_000110f4,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1e,DAT_000110f4 | 0x80,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1f,DAT_000110f4,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,4,DAT_000110ed,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,5,DAT_000110ed,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,6,DAT_000110ee,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,7,DAT_000110ee,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0xc,DAT_000110ed,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0xd,DAT_000110ed,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0xe,DAT_000110ee,*(code **)(_g_phyFuns + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000101f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0xf,DAT_000110ee);
  return;
}

