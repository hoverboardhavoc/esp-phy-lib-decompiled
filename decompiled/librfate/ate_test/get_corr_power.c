/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librfate -> ate_test.o -> get_corr_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_corr_power(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iq_est_disable();
  iq_est_enable(1,(1 << (param_2 & 0x1f)) - 1U & 0xffff);
  iVar4 = (_DAT_600a0478 >> 9) + (_DAT_600a0484 >> 9);
  iVar5 = (_DAT_600a047c >> 9) - (_DAT_600a0480 >> 9);
  iVar1 = (_DAT_600a0478 >> 9) - (_DAT_600a0484 >> 9);
  iVar8 = (_DAT_600a047c >> 9) + (_DAT_600a0480 >> 9);
  iVar2 = _DAT_600a0488 >> (param_2 + 6 & 0x1f);
  iVar3 = _DAT_600a048c >> (param_2 + 6 & 0x1f);
  iVar6 = _DAT_600a0490 >> (param_2 - 3 & 0x1f);
  iVar7 = (param_2 - 2) * 2;
  *param_1 = iVar6;
  iVar4 = __ashrdi3((uint)((uint)(iVar5 * iVar5 + iVar4 * iVar4) < (uint)(iVar4 * iVar4)) +
                    (int)((ulonglong)((longlong)iVar4 * (longlong)iVar4) >> 0x20) +
                    (int)((ulonglong)((longlong)iVar5 * (longlong)iVar5) >> 0x20),iVar7);
  param_1[1] = iVar4;
  iVar1 = __ashrdi3((uint)((uint)(iVar8 * iVar8 + iVar1 * iVar1) < (uint)(iVar1 * iVar1)) +
                    (int)((ulonglong)((longlong)iVar1 * (longlong)iVar1) >> 0x20) +
                    (int)((ulonglong)((longlong)iVar8 * (longlong)iVar8) >> 0x20),iVar7);
  param_1[2] = iVar1;
  param_1[3] = iVar2 * iVar2 + iVar3 * iVar3;
  if (param_3 != 0) {
    phy_printf("tot_p=%d, sig_pwr=%d, dc_i=%d, dc_q=%d\n",iVar6,iVar4);
    return;
  }
  return;
}

