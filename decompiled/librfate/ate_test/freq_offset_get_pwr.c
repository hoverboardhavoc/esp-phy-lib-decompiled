/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: librfate -> ate_test.o -> freq_offset_get_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_offset_get_pwr(uint param_1,uint param_2,uint *param_3,short *param_4,int param_5,
                        int param_6)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint extraout_a1;
  uint extraout_a1_00;
  uint extraout_a1_01;
  uint extraout_a1_02;
  uint extraout_a1_03;
  uint extraout_a1_04;
  uint extraout_a1_05;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  if (txtone_rms_80m == '\0') {
    uVar4 = 0x7fda8;
  }
  else {
    uVar4 = 0x7fdac;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  for (uVar6 = 0; (int)uVar6 < 1 << (param_1 & 0x1f); uVar6 = uVar6 + 1 & 0xff) {
    phy_iq_est_enable(1,(1 << (param_2 & 0x1f)) - 1U & 0xffff);
    get_iq_est_snr(&iStack_68,param_2,param_6,uVar4,uVar4);
    uVar5 = *param_3;
    uVar3 = iStack_60 + uVar5;
    *param_3 = uVar3;
    param_3[1] = (uint)(uVar3 < uVar5) + param_3[1] + iStack_5c;
    uVar5 = param_3[2];
    uVar3 = iStack_68 + uVar5;
    param_3[2] = uVar3;
    param_3[3] = (uint)(uVar3 < uVar5) + param_3[3] + iStack_64;
    uVar5 = param_3[4];
    uVar3 = iStack_58 + uVar5;
    param_3[4] = uVar3;
    param_3[5] = (uint)(uVar3 < uVar5) + param_3[5] + iStack_54;
    uVar5 = param_3[6];
    uVar3 = iStack_50 + uVar5;
    param_3[6] = uVar3;
    param_3[7] = (uint)(uVar3 < uVar5) + param_3[7] + iStack_4c;
    uVar3 = iStack_48 + param_3[8];
    param_3[9] = (uint)(uVar3 < param_3[8]) + param_3[9] + iStack_44;
    uVar5 = param_3[10];
    param_3[8] = uVar3;
    uVar3 = iStack_40 + uVar5;
    param_3[10] = uVar3;
    param_3[0xb] = (uint)(uVar3 < uVar5) + param_3[0xb] + iStack_3c;
    uVar5 = param_3[0xc];
    uVar3 = iStack_38 + uVar5;
    param_3[0xc] = uVar3;
    param_3[0xd] = (uint)(uVar3 < uVar5) + param_3[0xd] + iStack_34;
    phy_iq_est_disable();
    if (param_6 != 0) {
      phy_printf("%d, s=%lld, t=%lld, d=%lld\n",uVar6,iStack_60,iStack_5c,iStack_68,iStack_64,
                 iStack_58,iStack_54);
    }
  }
  uVar3 = __lshrdi3(*param_3,param_3[1],param_1);
  param_3[1] = extraout_a1;
  uVar7 = param_3[4];
  uVar5 = param_3[5];
  *param_3 = uVar3;
  uVar6 = __lshrdi3((param_3[3] - uVar5) - (uint)(param_3[2] < param_3[2] - uVar7),param_1);
  param_3[2] = uVar6;
  param_3[3] = extraout_a1_00;
  uVar6 = __lshrdi3(uVar7,uVar5,param_1);
  param_3[4] = uVar6;
  param_3[5] = extraout_a1_01;
  uVar6 = __lshrdi3(param_3[6],param_3[7],param_1);
  param_3[6] = uVar6;
  param_3[7] = extraout_a1_02;
  uVar5 = __lshrdi3(param_3[8],param_3[9],param_1);
  param_3[8] = uVar5;
  param_3[9] = extraout_a1_03;
  uVar7 = __lshrdi3(param_3[10],param_3[0xb],param_1);
  param_3[10] = uVar7;
  param_3[0xb] = extraout_a1_04;
  uVar7 = __lshrdi3(param_3[0xc],param_3[0xd],param_1);
  param_3[0xc] = uVar7;
  param_3[0xd] = extraout_a1_05;
  if (param_5 == 0) {
    sVar1 = linear_to_db_64bits(uVar6,extraout_a1_02,3);
    uVar7 = extraout_a1_02;
  }
  else {
    sVar1 = linear_to_db_64bits(uVar5,extraout_a1_03);
    uVar7 = extraout_a1_03;
    uVar6 = uVar5;
  }
  sVar2 = linear_to_db_64bits((extraout_a1 - uVar7) - (uint)(uVar3 < uVar3 - uVar6),3);
  *param_4 = sVar1 - sVar2;
  *param_4 = (short)(*param_4 + 8 >> 4);
  _DAT_2010041c = _DAT_2010041c & 0xfffbffff;
  phy_set_txclk_en(0);
  return;
}

