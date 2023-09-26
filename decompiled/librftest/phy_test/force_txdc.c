/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> force_txdc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_txdc(int param_1,short *param_2)

{
  if (force_txdc_table == 0) {
    force_txdc_table = _DAT_0001218a;
    DAT_00011332 = _DAT_0001218c;
    DAT_00011334 = _DAT_0001218e;
    DAT_00011336 = _DAT_00012190;
  }
  if (param_1 == 0) {
    _DAT_0001218a = force_txdc_table;
    _DAT_0001218c = DAT_00011332;
    _DAT_0001218e = DAT_00011334;
    _DAT_00012190 = DAT_00011336;
  }
  else {
    _DAT_0001218a = *param_2;
    _DAT_00012190 = param_2[2];
    _DAT_0001218c = _DAT_00012190;
    _DAT_0001218e = _DAT_0001218a;
  }
  return;
}

