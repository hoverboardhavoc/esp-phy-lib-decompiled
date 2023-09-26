/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> get_cal_iq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_cal_iq(int param_1)

{
  undefined2 uVar1;
  char cStack_14;
  char cStack_13;
  
  uVar1 = _DAT_000120da;
  if ((param_1 != 0) && (uVar1 = _DAT_000120ea, param_1 == 1)) {
    uVar1 = _DAT_000120d6;
  }
  get_iq_value(&cStack_14,uVar1);
  phy_printf("%d, %d; ",(int)cStack_14,(int)cStack_13);
  return;
}

