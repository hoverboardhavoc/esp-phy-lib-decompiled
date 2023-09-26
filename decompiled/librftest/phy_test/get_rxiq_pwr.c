/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> get_rxiq_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rxiq_pwr(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iq_est_enable(1,0x400);
  iVar3 = (_DAT_60044148 >> 8) + (_DAT_60044154 >> 8);
  iVar2 = (_DAT_6004414c >> 8) - (_DAT_60044150 >> 8);
  iVar4 = (_DAT_60044148 >> 8) - (_DAT_60044154 >> 8);
  iVar1 = (_DAT_60044150 >> 8) + (_DAT_6004414c >> 8);
  iq_est_disable();
  *param_1 = (uint)(iVar2 * iVar2 + iVar3 * iVar3) >> 5;
  param_1[1] = (uint)(iVar1 * iVar1 + iVar4 * iVar4) >> 5;
  return;
}

