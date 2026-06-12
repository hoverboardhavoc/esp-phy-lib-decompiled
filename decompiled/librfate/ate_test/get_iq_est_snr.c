/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: librfate -> ate_test.o -> get_iq_est_snr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int get_iq_est_snr(uint *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int extraout_a1;
  int extraout_a1_00;
  int extraout_a1_01;
  int extraout_a1_02;
  uint extraout_a1_03;
  undefined4 extraout_a1_04;
  undefined4 extraout_a1_05;
  undefined4 extraout_a1_06;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  
  uVar2 = _DAT_600c044c + _DAT_600c0458;
  iVar18 = param_4 >> 0x1f;
  uVar2 = __divdi3(uVar2 * 0x4000,uVar2 >> 0x12 | ((int)uVar2 >> 0x1f) << 0xe,param_4,iVar18);
  uVar3 = _DAT_600c0450 - _DAT_600c0454;
  uVar3 = __divdi3(uVar3 * 0x4000,uVar3 >> 0x12 | ((int)uVar3 >> 0x1f) << 0xe,param_4,iVar18);
  iVar9 = _DAT_600c0458;
  iVar1 = _DAT_600c044c;
  uVar16 = uVar3 * uVar3 + uVar2 * uVar2;
  uVar11 = (uint)(uVar16 < uVar2 * uVar2) +
           extraout_a1 * uVar2 * 2 + (int)((ulonglong)uVar2 * (ulonglong)uVar2 >> 0x20) +
           extraout_a1_00 * uVar3 * 2 + (int)((ulonglong)uVar3 * (ulonglong)uVar3 >> 0x20);
  param_1[8] = uVar16;
  uVar4 = iVar1 - iVar9;
  param_1[9] = uVar11;
  uVar4 = __divdi3(uVar4 * 0x4000,uVar4 >> 0x12 | ((int)uVar4 >> 0x1f) << 0xe,param_4,iVar18);
  uVar5 = _DAT_600c0450 + _DAT_600c0454;
  uVar5 = __divdi3(uVar5 * 0x4000,uVar5 >> 0x12 | ((int)uVar5 >> 0x1f) << 0xe,param_4,iVar18);
  uVar10 = uVar5 * uVar5 + uVar4 * uVar4;
  uVar16 = uVar16 + uVar10;
  uVar19 = (uint)(uVar10 < uVar4 * uVar4) +
           extraout_a1_01 * uVar4 * 2 + (int)((ulonglong)uVar4 * (ulonglong)uVar4 >> 0x20) +
           extraout_a1_02 * uVar5 * 2 + (int)((ulonglong)uVar5 * (ulonglong)uVar5 >> 0x20);
  uVar14 = (uint)(uVar16 < uVar10) + uVar11 + uVar19;
  param_1[6] = uVar10;
  param_1[7] = uVar19;
  uVar20 = uVar4 * uVar2 - uVar5 * uVar3;
  uVar11 = ((uVar4 * extraout_a1 + extraout_a1_01 * uVar2 +
            (int)((ulonglong)uVar2 * (ulonglong)uVar4 >> 0x20)) -
           (uVar5 * extraout_a1_00 + extraout_a1_02 * uVar3 +
           (int)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x20))) - (uint)(uVar4 * uVar2 < uVar20);
  param_1[0xb] = uVar11;
  param_1[10] = uVar20;
  uVar12 = uVar4 * uVar3 + uVar5 * uVar2;
  param_1[0xc] = uVar12;
  iVar1 = _DAT_600c0464;
  uVar4 = (uint)(uVar12 < uVar4 * uVar3) +
          (int)((ulonglong)uVar3 * (ulonglong)uVar4 >> 0x20) +
          uVar4 * extraout_a1_00 + extraout_a1_01 * uVar3 +
          uVar5 * extraout_a1 + extraout_a1_02 * uVar2 +
          (int)((ulonglong)uVar2 * (ulonglong)uVar5 >> 0x20);
  iVar18 = _DAT_600c045c >> 4;
  iVar9 = _DAT_600c0460 >> 4;
  param_1[0xd] = uVar4;
  uVar2 = param_2 + 7U & 0xff;
  uVar13 = iVar18 * iVar18 + iVar9 * iVar9;
  uVar17 = (uint)(uVar13 < (uint)(iVar18 * iVar18)) +
           (int)((ulonglong)((longlong)iVar18 * (longlong)iVar18) >> 0x20) +
           (int)((ulonglong)((longlong)iVar9 * (longlong)iVar9) >> 0x20);
  uVar3 = __ashldi3(iVar1 >> 0x1f,uVar2);
  uVar5 = uVar3 - uVar13;
  uVar15 = uVar5 - uVar16;
  iVar1 = (((extraout_a1_03 - uVar17) - (uint)(uVar3 < uVar5)) - uVar14) - (uint)(uVar5 < uVar15);
  if (param_3 != 0) {
    iVar9 = uVar2 + 0xb;
    uVar6 = __lshrdi3(uVar13,uVar17,iVar9);
    uVar7 = __lshrdi3(uVar16,uVar14,iVar9);
    uVar8 = __lshrdi3(uVar3,extraout_a1_03,iVar9);
    __lshrdi3(uVar12,uVar4,iVar9);
    __lshrdi3(uVar20,uVar11,iVar9);
    __lshrdi3(uVar10,uVar19,iVar9);
    __ashrdi3(uVar15,iVar1,iVar9);
    phy_printf("tot_pwr=%lld, sig_pwr=%lld, dc_pwr=%lld, n_pwr=%lld, iq_pwr=%lld,iq_g=%lld,iq_p=%d\n"
               ,uVar8,extraout_a1_06,uVar7,extraout_a1_05,uVar6,extraout_a1_04);
  }
  *param_1 = uVar3;
  param_1[1] = extraout_a1_03;
  param_1[2] = uVar16;
  param_1[3] = uVar14;
  param_1[4] = uVar13;
  param_1[5] = uVar17;
  if ((iVar1 < 1) && ((iVar1 != 0 || (uVar15 == 0)))) {
    iVar1 = 0x50;
  }
  else {
    iVar9 = linear_to_db_64bits(uVar16,uVar14,3);
    iVar1 = linear_to_db_64bits(uVar15,iVar1,3);
    iVar1 = (int)(short)((iVar9 - iVar1) + 8 >> 4);
  }
  return iVar1;
}

