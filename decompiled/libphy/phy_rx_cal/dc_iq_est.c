/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_rx_cal.o -> dc_iq_est
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dc_iq_est(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iq_est_disable();
  iq_est_enable(param_1,param_2);
  param_2 = param_2 + 1;
  iVar2 = (_DAT_600a0488 >> 6) / param_2;
  *param_3 = iVar2;
  iVar1 = (_DAT_600a048c >> 6) / param_2;
  param_3[1] = iVar1;
  iVar1 = (_DAT_600a0490 / param_2) * 8 - (iVar2 * iVar2 + iVar1 * iVar1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar1 = linear_to_db(iVar1,0);
  param_3[2] = iVar1 + 8 >> 4;
  _DAT_600a0474 = _DAT_600a0474 & 0xfffffffd;
  ets_delay_us(1);
  _DAT_600a0474 = _DAT_600a0474 & 0xfffffffe;
  return;
}

