/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> txdc_delta_max
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txdc_delta_max(short *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = abs_temp((int)*param_1);
  iVar3 = abs_temp((int)param_1[1]);
  if (iVar3 < iVar2) {
    iVar2 = abs_temp((int)*param_2);
    sVar1 = *param_1;
  }
  else {
    iVar2 = abs_temp((int)param_2[1]);
    sVar1 = param_1[1];
  }
  iVar3 = abs_temp((int)sVar1);
  if (iVar2 < iVar3) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
  }
  return;
}

