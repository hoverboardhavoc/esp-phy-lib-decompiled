/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> phy_set_clk_conf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_set_clk_conf(int param_1)

{
  if (param_1 == 1) {
    _DAT_600a9804 = 0;
    _DAT_600a9814 = 0x167ff;
    return;
  }
  if (param_1 == 2) {
    _DAT_600a9804 = 0;
  }
  else {
    if (param_1 != 3) {
      _DAT_600a9804 = 0xffffffff;
      _DAT_600a9814 = 0x7ffff;
      return;
    }
    _DAT_600a9804 = 0x1800000;
  }
  _DAT_600a9814 = 0x76000;
  return;
}

