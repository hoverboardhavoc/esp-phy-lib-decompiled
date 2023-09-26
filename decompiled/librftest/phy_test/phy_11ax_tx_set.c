/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> phy_11ax_tx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_11ax_tx_set(undefined4 *param_1,int param_2)

{
  phy_11ax_array = *param_1;
  _DAT_0001133c = 0x10;
  if (1 < param_2) {
    _DAT_0001133c = param_1[1];
  }
  DAT_00011340 = 1;
  if (2 < param_2) {
    DAT_00011340 = param_1[2];
  }
  return;
}

