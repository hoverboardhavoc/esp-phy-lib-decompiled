/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_ana.o -> set_rf_freq_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rf_freq_offset(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_24 [16];
  
  (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,0xb,6,6,0,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,2,7,7,0,*(code **)(_g_phyFuns + 0x1bc));
  rfpll_set_freq(param_2,param_1,param_3,auStack_24);
  write_rfpll_sdm(auStack_24);
  restart_cal();
  wait_rfpll_cal_end();
  return;
}

