/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> get_pwctrl_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int get_pwctrl_correct(int param_1,short *param_2,uint param_3,int param_4)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = (*param_2 + param_1) - ((int)*param_2 >> (param_3 & 0x1f));
  sVar2 = (short)iVar3;
  iVar1 = param_4 << (param_3 + 2 & 0x1f);
  if (sVar2 < iVar1) {
    if (-iVar1 < (int)sVar2) {
      *param_2 = sVar2;
      return 0;
    }
    param_4 = param_4 << 0x18;
    sVar2 = (short)((uint)(iVar3 * 0x10000) >> 0x10) + (short)iVar1;
  }
  else {
    param_4 = param_4 * -0x1000000;
    sVar2 = sVar2 - (short)iVar1;
  }
  *param_2 = sVar2;
  return param_4 >> 0x18;
}

