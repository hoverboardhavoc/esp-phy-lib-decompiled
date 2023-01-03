/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_i2c.o -> phy_i2c_init1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_i2c_init1(void)

{
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,2,0x72,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,3,0x4a,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,4,0xf8,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,5,2,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,6,200,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,7,0xb9,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,8,0x81,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x62,1,0,0x68,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x62,1,4,0x28,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x62,1,0xf,phy_param,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x62,1,0xb,0x44,*(code **)(_g_phyFuns + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000103aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,2,0x26);
  return;
}

