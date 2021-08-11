/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> dc_iq_est
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dc_iq_est(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iq_est_enable();
  param_1 = param_1 + 1;
  iVar2 = (_DAT_6000615c >> 6) / param_1;
  *param_2 = iVar2;
  iVar1 = (_DAT_60006160 >> 6) / param_1;
  param_2[1] = iVar1;
  iVar1 = (_DAT_60006164 / param_1) * 8 - (iVar2 * iVar2 + iVar1 * iVar1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar1 = linear_to_db(iVar1,0);
  param_2[2] = iVar1 + 8 >> 4;
  _DAT_60006144 = _DAT_60006144 & 0xfffffffd;
  ets_delay_us(1);
  _DAT_60006144 = _DAT_60006144 & 0xfffffffe;
  return;
}

