/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> rf_test.o -> tx_contin_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void tx_contin_en(int param_1)

{
  char *pcVar1;
  
  fcc_mode_sel = (undefined1)param_1;
  if (param_1 == 1) {
    pcVar1 = " wifi tx continuous test!\n";
  }
  else {
    pcVar1 = " wifi tx packet test!\n";
  }
  phy_printf(pcVar1);
  return;
}

