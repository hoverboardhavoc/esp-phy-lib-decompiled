/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> set_rf_freq_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_rf_freq_offset(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_14 [16];
  
  rfpll_set_freq(param_2,param_1,auStack_14);
  write_rfpll_sdm(auStack_14);
  restart_cal();
  wait_rfpll_cal_end();
  return;
}

