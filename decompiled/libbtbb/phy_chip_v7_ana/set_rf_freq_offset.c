/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> set_rf_freq_offset
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

