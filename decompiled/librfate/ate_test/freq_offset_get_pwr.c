/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librfate -> ate_test.o -> freq_offset_get_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void freq_offset_get_pwr(uint param_1,uint param_2,uint *param_3,undefined4 param_4)

{
  uint extraout_a1;
  uint extraout_a1_00;
  uint extraout_a1_01;
  uint extraout_a1_02;
  uint extraout_a1_03;
  uint extraout_a1_04;
  uint extraout_a1_05;
  uint uVar1;
  uint uVar2;
  uint uVar3;
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
  for (uVar3 = 0; (int)uVar3 < 1 << (param_1 & 0x1f); uVar3 = uVar3 + 1 & 0xff) {
    iq_est_disable();
    iq_est_enable(1,(1 << (param_2 & 0x1f)) - 1U & 0xffff);
    get_iq_est_snr(&iStack_68,param_2,param_4,0x7fe53,0x7fe53);
    uVar2 = *param_3;
    uVar1 = iStack_60 + uVar2;
    *param_3 = uVar1;
    param_3[1] = (uint)(uVar1 < uVar2) + param_3[1] + iStack_5c;
    uVar2 = param_3[2];
    uVar1 = iStack_68 + uVar2;
    param_3[2] = uVar1;
    param_3[3] = (uint)(uVar1 < uVar2) + param_3[3] + iStack_64;
    uVar2 = param_3[4];
    uVar1 = iStack_58 + uVar2;
    param_3[4] = uVar1;
    param_3[5] = (uint)(uVar1 < uVar2) + param_3[5] + iStack_54;
    uVar2 = param_3[6];
    uVar1 = iStack_50 + uVar2;
    param_3[6] = uVar1;
    param_3[7] = (uint)(uVar1 < uVar2) + param_3[7] + iStack_4c;
    uVar1 = iStack_48 + param_3[8];
    param_3[9] = (uint)(uVar1 < param_3[8]) + param_3[9] + iStack_44;
    uVar2 = param_3[10];
    param_3[8] = uVar1;
    uVar1 = iStack_40 + uVar2;
    param_3[10] = uVar1;
    param_3[0xb] = (uint)(uVar1 < uVar2) + param_3[0xb] + iStack_3c;
    uVar2 = param_3[0xc];
    uVar1 = iStack_38 + uVar2;
    param_3[0xc] = uVar1;
    param_3[0xd] = (uint)(uVar1 < uVar2) + param_3[0xd] + iStack_34;
  }
  uVar3 = __lshrdi3(*param_3,param_3[1],param_1);
  param_3[1] = extraout_a1;
  uVar2 = param_3[4];
  uVar1 = param_3[5];
  *param_3 = uVar3;
  uVar3 = __lshrdi3((param_3[3] - uVar1) - (uint)(param_3[2] < param_3[2] - uVar2),param_1);
  param_3[2] = uVar3;
  param_3[3] = extraout_a1_00;
  uVar3 = __lshrdi3(uVar2,uVar1,param_1);
  param_3[4] = uVar3;
  param_3[5] = extraout_a1_01;
  uVar3 = __lshrdi3(param_3[6],param_3[7],param_1);
  param_3[6] = uVar3;
  param_3[7] = extraout_a1_02;
  uVar3 = __lshrdi3(param_3[8],param_3[9],param_1);
  param_3[8] = uVar3;
  param_3[9] = extraout_a1_03;
  uVar3 = __lshrdi3(param_3[10],param_3[0xb],param_1);
  param_3[10] = uVar3;
  param_3[0xb] = extraout_a1_04;
  uVar3 = __lshrdi3(param_3[0xc],param_3[0xd],param_1);
  param_3[0xc] = uVar3;
  param_3[0xd] = extraout_a1_05;
  return;
}

