/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_ana.o -> get_rf_freq_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rf_freq_cap(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  
  set_rfpll_freq(DAT_000120ff,param_1,param_2,param_3);
  (**(code **)(_g_phyFuns + 0x22c))
            (param_1 - 0x60U & 0xff,&phy_param,0,DAT_000120a7,*(code **)(_g_phyFuns + 0x22c));
  uVar1 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,1,7,0,*(code **)(_g_phyFuns + 0x1b8));
  *param_4 = uVar1;
  bVar2 = (**(code **)(_g_phyFuns + 0x1ac))(0x62,1,2,*(code **)(_g_phyFuns + 0x1ac));
  bVar3 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,6,3,0,*(code **)(_g_phyFuns + 0x1b8));
  param_4[1] = bVar2 & 0xf0 | bVar3 | 0x80;
  return;
}

