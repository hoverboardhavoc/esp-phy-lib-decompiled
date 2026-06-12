/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: librfate -> ate_test.o -> get_corr_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_corr_power(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (_DAT_600c044c >> 9) + (_DAT_600c0458 >> 9);
  iVar5 = (_DAT_600c0450 >> 9) - (_DAT_600c0454 >> 9);
  iVar2 = _DAT_600c045c >> (param_2 + 6U & 0x1f);
  iVar3 = _DAT_600c0460 >> (param_2 + 6U & 0x1f);
  iVar1 = _DAT_600c0464 >> (param_2 - 3U & 0x1f);
  *param_1 = iVar1;
  iVar4 = __ashrdi3((uint)((uint)(iVar5 * iVar5 + iVar4 * iVar4) < (uint)(iVar4 * iVar4)) +
                    (int)((ulonglong)((longlong)iVar4 * (longlong)iVar4) >> 0x20) +
                    (int)((ulonglong)((longlong)iVar5 * (longlong)iVar5) >> 0x20),(param_2 + -2) * 2
                   );
  param_1[1] = iVar4;
  param_1[2] = iVar2 * iVar2 + iVar3 * iVar3;
  if (param_3 != 0) {
    phy_printf("tot_p=%d, sig_pwr=%d, dc_i=%d, dc_q=%d\n",iVar1,iVar4);
    return;
  }
  return;
}

