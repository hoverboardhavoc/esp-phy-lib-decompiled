/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librfate -> ate_test.o -> freq_offset_get_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_offset_get_pwr(uint param_1,uint param_2,uint param_3,uint *param_4,short *param_5,
                        int param_6,int param_7)

{
  int iVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint extraout_a1;
  uint extraout_a1_00;
  uint extraout_a1_01;
  uint extraout_a1_02;
  uint extraout_a1_03;
  uint extraout_a1_04;
  uint extraout_a1_05;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
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
  
  set_txclk_en(1);
  _DAT_600a042c = _DAT_600a042c & 0xfffffffc | param_2 & 3;
  _DAT_600a0420 = (int)param_2 >> 2 & 0xfdbffffU | _DAT_600a0420 & 0xf0000000 | 0x240000;
  if (txtone_rms_80m == '\0') {
    uVar7 = 0x7fda8;
  }
  else {
    uVar7 = 0x7fdac;
  }
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  param_4[8] = 0;
  param_4[9] = 0;
  param_4[10] = 0;
  param_4[0xb] = 0;
  param_4[0xc] = 0;
  param_4[0xd] = 0;
  for (uVar8 = 0; (int)uVar8 < 1 << (param_1 & 0x1f); uVar8 = uVar8 + 1 & 0xff) {
    (**(code **)(_g_phyFuns + 0xa0))
              (1,(1 << (param_3 & 0x1f)) - 1U & 0xffff,*(code **)(_g_phyFuns + 0xa0));
    get_iq_est_snr(&iStack_78,param_3,param_7,uVar7,uVar7);
    uVar5 = *param_4;
    uVar4 = iStack_70 + uVar5;
    *param_4 = uVar4;
    param_4[1] = (uint)(uVar4 < uVar5) + param_4[1] + iStack_6c;
    uVar5 = param_4[2];
    uVar4 = iStack_78 + uVar5;
    param_4[2] = uVar4;
    param_4[3] = (uint)(uVar4 < uVar5) + param_4[3] + iStack_74;
    uVar5 = param_4[4];
    uVar4 = iStack_68 + uVar5;
    param_4[4] = uVar4;
    param_4[5] = (uint)(uVar4 < uVar5) + param_4[5] + iStack_64;
    uVar5 = param_4[6];
    uVar4 = iStack_60 + uVar5;
    param_4[6] = uVar4;
    param_4[7] = (uint)(uVar4 < uVar5) + param_4[7] + iStack_5c;
    uVar4 = iStack_58 + param_4[8];
    param_4[9] = (uint)(uVar4 < param_4[8]) + param_4[9] + iStack_54;
    uVar5 = param_4[10];
    param_4[8] = uVar4;
    uVar4 = iStack_50 + uVar5;
    param_4[10] = uVar4;
    param_4[0xb] = (uint)(uVar4 < uVar5) + param_4[0xb] + iStack_4c;
    uVar4 = iStack_48 + param_4[0xc];
    param_4[0xd] = (uint)(uVar4 < param_4[0xc]) + param_4[0xd] + iStack_44;
    iVar1 = _g_phyFuns;
    param_4[0xc] = uVar4;
    (**(code **)(iVar1 + 0xa4))(*(code **)(iVar1 + 0xa4));
    if (param_7 != 0) {
      phy_printf("%d, s=%lld, t=%lld, d=%lld\n",uVar8,iStack_70,iStack_6c,iStack_78,iStack_74,
                 iStack_68,iStack_64);
    }
  }
  uVar4 = __lshrdi3(*param_4,param_4[1],param_1);
  param_4[1] = extraout_a1;
  uVar6 = param_4[4];
  uVar5 = param_4[5];
  *param_4 = uVar4;
  uVar8 = __lshrdi3((param_4[3] - uVar5) - (uint)(param_4[2] < param_4[2] - uVar6),param_1);
  param_4[2] = uVar8;
  param_4[3] = extraout_a1_00;
  uVar8 = __lshrdi3(uVar6,uVar5,param_1);
  param_4[4] = uVar8;
  param_4[5] = extraout_a1_01;
  uVar8 = __lshrdi3(param_4[6],param_4[7],param_1);
  param_4[6] = uVar8;
  param_4[7] = extraout_a1_02;
  uVar5 = __lshrdi3(param_4[8],param_4[9],param_1);
  param_4[8] = uVar5;
  param_4[9] = extraout_a1_03;
  uVar6 = __lshrdi3(param_4[10],param_4[0xb],param_1);
  param_4[10] = uVar6;
  param_4[0xb] = extraout_a1_04;
  uVar6 = __lshrdi3(param_4[0xc],param_4[0xd],param_1);
  param_4[0xc] = uVar6;
  param_4[0xd] = extraout_a1_05;
  if (param_6 == 0) {
    sVar2 = linear_to_db_64bits(uVar8,extraout_a1_02,3);
    uVar6 = extraout_a1_02;
  }
  else {
    sVar2 = linear_to_db_64bits(uVar5,extraout_a1_03);
    uVar6 = extraout_a1_03;
    uVar8 = uVar5;
  }
  sVar3 = linear_to_db_64bits((extraout_a1 - uVar6) - (uint)(uVar4 < uVar4 - uVar8),3);
  *param_5 = sVar2 - sVar3;
  *param_5 = (short)(*param_5 + 8 >> 4);
  _DAT_600a0420 = _DAT_600a0420 & 0xfffbffff;
  set_txclk_en(0);
  return;
}

