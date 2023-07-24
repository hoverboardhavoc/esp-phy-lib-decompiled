/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
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
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
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
  
  (**(code **)(_g_phyFuns + 0x50))(1,*(code **)(_g_phyFuns + 0x50));
  _DAT_60006050 = _DAT_60006050 & 0xfffffffc | param_2 & 3;
  _DAT_60006040 = (int)param_2 >> 2 & 0xfdbffffU | _DAT_60006040 & 0xf0000000 | 0x240000;
  if (txtone_rms_80m == '\0') {
    uVar6 = 0x7fda8;
  }
  else {
    uVar6 = 0x7fdac;
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
  for (uVar7 = 0; (int)uVar7 < 1 << (param_1 & 0x1f); uVar7 = uVar7 + 1 & 0xff) {
    (**(code **)(_g_phyFuns + 0x108))(*(code **)(_g_phyFuns + 0x108));
    (**(code **)(_g_phyFuns + 0x104))
              (1,(1 << (param_3 & 0x1f)) - 1U & 0xffff,*(code **)(_g_phyFuns + 0x104));
    get_iq_est_snr(&iStack_78,param_3,param_7,uVar6,uVar6);
    uVar4 = *param_4;
    uVar3 = iStack_70 + uVar4;
    *param_4 = uVar3;
    param_4[1] = (uint)(uVar3 < uVar4) + param_4[1] + iStack_6c;
    uVar4 = param_4[2];
    uVar3 = iStack_78 + uVar4;
    param_4[2] = uVar3;
    param_4[3] = (uint)(uVar3 < uVar4) + param_4[3] + iStack_74;
    uVar4 = param_4[4];
    uVar3 = iStack_68 + uVar4;
    param_4[4] = uVar3;
    param_4[5] = (uint)(uVar3 < uVar4) + param_4[5] + iStack_64;
    uVar4 = param_4[6];
    uVar3 = iStack_60 + uVar4;
    param_4[6] = uVar3;
    param_4[7] = (uint)(uVar3 < uVar4) + param_4[7] + iStack_5c;
    uVar3 = iStack_58 + param_4[8];
    param_4[9] = (uint)(uVar3 < param_4[8]) + param_4[9] + iStack_54;
    uVar4 = param_4[10];
    param_4[8] = uVar3;
    uVar3 = iStack_50 + uVar4;
    param_4[10] = uVar3;
    param_4[0xb] = (uint)(uVar3 < uVar4) + param_4[0xb] + iStack_4c;
    uVar4 = param_4[0xc];
    uVar3 = iStack_48 + uVar4;
    param_4[0xc] = uVar3;
    param_4[0xd] = (uint)(uVar3 < uVar4) + param_4[0xd] + iStack_44;
  }
  uVar7 = __lshrdi3(*param_4,param_4[1],param_1);
  param_4[1] = extraout_a1;
  uVar5 = param_4[4];
  uVar4 = param_4[5];
  *param_4 = uVar7;
  uVar3 = __lshrdi3((param_4[3] - uVar4) - (uint)(param_4[2] < param_4[2] - uVar5),param_1);
  param_4[2] = uVar3;
  param_4[3] = extraout_a1_00;
  uVar4 = __lshrdi3(uVar5,uVar4,param_1);
  param_4[4] = uVar4;
  param_4[5] = extraout_a1_01;
  uVar5 = __lshrdi3(param_4[6],param_4[7],param_1);
  param_4[6] = uVar5;
  param_4[7] = extraout_a1_02;
  uVar5 = __lshrdi3(param_4[8],param_4[9],param_1);
  param_4[8] = uVar5;
  param_4[9] = extraout_a1_03;
  uVar5 = __lshrdi3(param_4[10],param_4[0xb],param_1);
  param_4[10] = uVar5;
  param_4[0xb] = extraout_a1_04;
  uVar5 = __lshrdi3(param_4[0xc],param_4[0xd],param_1);
  param_4[0xc] = uVar5;
  param_4[0xd] = extraout_a1_05;
  if (param_7 != 0) {
    phy_printf("sig_power:%lld, t_pwr:%lld, dc_power:%lld, iq_mismatch:%lld, iq_power:%lld, iq_amp:%lld, iq_pha:%lld\n"
               ,uVar7,extraout_a1,uVar3,extraout_a1_00,uVar4,extraout_a1_01);
  }
  uVar7 = *param_4;
  uVar3 = param_4[1];
  if (param_6 == 0) {
    uVar4 = param_4[6];
    uVar5 = param_4[7];
    sVar1 = linear_to_db_64bits(uVar4,uVar5,3);
    sVar2 = linear_to_db_64bits((uVar3 - uVar5) - (uint)(uVar7 < uVar7 - uVar4),3);
    sVar1 = sVar1 - sVar2;
  }
  else {
    uVar4 = param_4[8];
    uVar5 = param_4[9];
    sVar1 = linear_to_db_64bits(uVar4,uVar5,3);
    sVar2 = linear_to_db_64bits((uVar3 - uVar5) - (uint)(uVar7 < uVar7 - uVar4),3);
    sVar1 = sVar1 - sVar2;
  }
  *param_5 = sVar1;
  *param_5 = (short)(*param_5 + 8 >> 4);
  _DAT_60006040 = _DAT_60006040 & 0xfffbffff;
  (**(code **)(_g_phyFuns + 0x50))(0,*(code **)(_g_phyFuns + 0x50));
  return;
}

