/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librfate -> ate_test.o -> get_iq_est_snr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int get_iq_est_snr(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
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
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  uVar1 = _DAT_60006148 + _DAT_60006154;
  iVar14 = param_4 >> 0x1f;
  uVar2 = __divdi3(uVar1 * 0x4000,uVar1 >> 0x12 | ((int)uVar1 >> 0x1f) << 0xe,param_4,iVar14);
  uVar1 = _DAT_6000614c - _DAT_60006150;
  uVar3 = __divdi3(uVar1 * 0x4000,uVar1 >> 0x12 | ((int)uVar1 >> 0x1f) << 0xe,param_4,iVar14);
  iVar10 = _DAT_60006154;
  iVar13 = _DAT_60006148;
  uVar12 = uVar3 * uVar3 + uVar2 * uVar2;
  uVar1 = (uint)(uVar12 < uVar2 * uVar2) +
          extraout_a1 * uVar2 * 2 + (int)((ulonglong)uVar2 * (ulonglong)uVar2 >> 0x20) +
          extraout_a1_00 * uVar3 * 2 + (int)((ulonglong)uVar3 * (ulonglong)uVar3 >> 0x20);
  param_1[8] = uVar12;
  param_1[9] = uVar1;
  uVar4 = iVar13 - iVar10;
  uVar4 = __divdi3(uVar4 * 0x4000,uVar4 >> 0x12 | ((int)uVar4 >> 0x1f) << 0xe,param_4,iVar14);
  uVar5 = _DAT_6000614c + _DAT_60006150;
  uVar5 = __divdi3(uVar5 * 0x4000,uVar5 >> 0x12 | ((int)uVar5 >> 0x1f) << 0xe,param_4,iVar14);
  uVar9 = uVar5 * uVar5 + uVar4 * uVar4;
  uVar11 = extraout_a1_01 * uVar4 * 2 + (int)((ulonglong)uVar4 * (ulonglong)uVar4 >> 0x20) +
           extraout_a1_02 * uVar5 * 2 + (int)((ulonglong)uVar5 * (ulonglong)uVar5 >> 0x20) +
           (uint)(uVar9 < uVar4 * uVar4);
  uVar12 = uVar9 + uVar12;
  param_1[6] = uVar9;
  param_1[7] = uVar11;
  uVar1 = (uint)(uVar12 < uVar9) + uVar11 + uVar1;
  uVar9 = uVar4 * uVar2 - uVar5 * uVar3;
  param_1[0xb] = ((uVar4 * extraout_a1 + extraout_a1_01 * uVar2 +
                  (int)((ulonglong)uVar2 * (ulonglong)uVar4 >> 0x20)) -
                 (uVar5 * extraout_a1_00 + extraout_a1_02 * uVar3 +
                 (int)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x20))) -
                 (uint)(uVar4 * uVar2 < uVar9);
  param_1[10] = uVar9;
  uVar9 = uVar5 * uVar2 + uVar4 * uVar3;
  param_1[0xc] = uVar9;
  iVar13 = _DAT_60006164;
  iVar14 = _DAT_6000615c >> 4;
  iVar10 = _DAT_60006160 >> 4;
  uVar11 = param_2 + 7U & 0xff;
  param_1[0xd] = (int)((ulonglong)uVar3 * (ulonglong)uVar4 >> 0x20) +
                 uVar4 * extraout_a1_00 + extraout_a1_01 * uVar3 +
                 (int)((ulonglong)uVar2 * (ulonglong)uVar5 >> 0x20) +
                 uVar5 * extraout_a1 + extraout_a1_02 * uVar2 + (uint)(uVar9 < uVar4 * uVar3);
  uVar9 = iVar10 * iVar10 + iVar14 * iVar14;
  uVar5 = (uint)(uVar9 < (uint)(iVar14 * iVar14)) +
          (int)((ulonglong)((longlong)iVar14 * (longlong)iVar14) >> 0x20) +
          (int)((ulonglong)((longlong)iVar10 * (longlong)iVar10) >> 0x20);
  uVar2 = __ashldi3(iVar13 >> 0x1f,uVar11);
  uVar3 = uVar2 - uVar9;
  uVar4 = uVar3 - uVar12;
  iVar13 = (((extraout_a1_03 - uVar5) - (uint)(uVar2 < uVar3)) - uVar1) - (uint)(uVar3 < uVar4);
  if (param_3 != 0) {
    iVar10 = uVar11 + 0xb;
    uVar6 = __lshrdi3(uVar9,uVar5,iVar10);
    uVar7 = __lshrdi3(uVar12,uVar1,iVar10);
    uVar8 = __lshrdi3(uVar2,extraout_a1_03,iVar10);
    __ashrdi3(uVar4,iVar13,iVar10);
    phy_printf("total_power=%lld, sig_power=%lld, dc_power=%lld, noise_power=%lld\n",uVar8,
               extraout_a1_06,uVar7,extraout_a1_05,uVar6,extraout_a1_04);
  }
  *param_1 = uVar2;
  param_1[1] = extraout_a1_03;
  param_1[2] = uVar12;
  param_1[3] = uVar1;
  param_1[4] = uVar9;
  param_1[5] = uVar5;
  if ((iVar13 < 1) && ((iVar13 != 0 || (uVar4 == 0)))) {
    iVar13 = 0x50;
  }
  else {
    iVar10 = linear_to_db_64bits(uVar12,uVar1,3);
    iVar13 = linear_to_db_64bits(uVar4,iVar13,3);
    iVar13 = (int)(short)((iVar10 - iVar13) + 8 >> 4);
  }
  return iVar13;
}

