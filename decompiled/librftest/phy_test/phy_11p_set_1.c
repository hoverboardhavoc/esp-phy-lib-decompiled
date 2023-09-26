/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> phy_11p_set_1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_11p_set_1(int param_1,int param_2)

{
  txdc_cal_new = SUB41(param_1,0);
  DAT_0001202d = (char)param_2;
  if (param_1 == 0) {
    _DAT_600a981c = _DAT_600a981c & 0xffffffe3;
    _DAT_600a7030 = _DAT_600a7030 | 0x20;
  }
  else {
    _DAT_600a981c = ((param_2 != 0) + 4) * 4 | _DAT_600a981c & 0xffffffe3;
    _DAT_600a7030 = _DAT_600a7030 & 0xffffffdf;
  }
  return;
}

