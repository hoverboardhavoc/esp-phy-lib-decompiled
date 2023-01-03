/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_i2c.o -> bias_reg_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bias_reg_set(void)

{
  (**(code **)(_g_phyFuns + 0x60))(0x6a,1,0,3,0,0xf,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x6a,1,1,3,0,0xc,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x6a,1,0,7,4,0xc,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x61,0,8,0,0,0,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x61,0,8,4,4,0,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x61,0,7,5,5,0,*(code **)(_g_phyFuns + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x60))(0x61,0,7,5,5,1);
  return;
}

