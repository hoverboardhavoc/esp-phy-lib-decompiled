/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> dc_iq_est_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dc_iq_est_test(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iq_est_disable();
  iq_est_enable(param_1,param_2);
  param_2 = param_2 + 1;
  iVar2 = (_DAT_600a0488 >> 6) / param_2;
  *param_3 = iVar2;
  iVar4 = (_DAT_600a048c >> 6) / param_2;
  param_3[1] = iVar4;
  iVar1 = (_DAT_600a0494 / param_2) * 4 - iVar2 * iVar2;
  iVar3 = (_DAT_600a0490 / param_2) * 8 - (iVar2 * iVar2 + iVar4 * iVar4);
  iVar2 = (_DAT_600a0498 / param_2) * 4 - iVar4 * iVar4;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar3 = linear_to_db(iVar3,0);
  *param_4 = iVar3;
  param_3[2] = iVar3 + 8 >> 4;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar1 = linear_to_db(iVar1,0);
  param_4[1] = iVar1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar2 = linear_to_db(iVar2,0);
  param_4[2] = iVar2;
  return;
}

