/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_init.o -> phy_wakeup_init_ram
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_wakeup_init_ram(void)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(g_phyFuns + 4))(*(code **)(g_phyFuns + 4));
  phy_get_xtal_freq();
  _DAT_6004e930 = _DAT_6004e930 & 0xfffdffff | 0x20000;
  (**(code **)(g_phyFuns + 0x138))(*(code **)(g_phyFuns + 0x138));
  i2c_master_reset_new();
  (**(code **)(g_phyFuns + 0x78))(*(code **)(g_phyFuns + 0x78));
  (**(code **)(g_phyFuns + 0x70))(4,1,0,*(code **)(g_phyFuns + 0x70));
  (**(code **)(g_phyFuns + 0x7c))(*(code **)(g_phyFuns + 0x7c));
  i2c_bbpll_set(0);
  (**(code **)(g_phyFuns + 0x120))(*(code **)(g_phyFuns + 0x120));
  phy_i2c_init1_new();
  (**(code **)(g_phyFuns + 0x128))(DAT_000109b6,*(code **)(g_phyFuns + 0x128));
  (**(code **)(g_phyFuns + 0x118))(*(code **)(g_phyFuns + 0x118));
  _DAT_60040058 = _DAT_60040058 | 0x400000;
  (**(code **)(g_phyFuns + 0xec))(*(code **)(g_phyFuns + 0xec));
  (**(code **)(g_phyFuns + 0x14))(*(code **)(g_phyFuns + 0x14));
  (**(code **)(g_phyFuns + 0x144))(0,*(code **)(g_phyFuns + 0x144));
  DAT_00010847 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(g_phyFuns + 8))(uVar1);
  return;
}

