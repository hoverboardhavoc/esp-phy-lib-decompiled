/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> get_rf_gain_qdb
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 get_rf_gain_qdb(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1U & 0xff;
  if (uVar1 < 6) {
    return *(undefined1 *)((int)&CSWTCH_288 + uVar1);
  }
  return 5;
}

