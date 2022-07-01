/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_rx_cal.o -> get_dco_comp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int get_dco_comp(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_6 < 4 ^ 1;
  if (param_1 != 0) {
    iVar1 = 3;
    if (param_2 == 0) {
      iVar1 = 0;
    }
    uVar4 = (uVar4 + param_5 & 0xff) + iVar1;
  }
  iVar1 = param_3 >> (uVar4 & 0x1f);
  iVar2 = abs_temp(param_3 - param_4);
  iVar3 = abs_temp((param_3 * 3) / 2);
  if (iVar3 < iVar2) {
    iVar1 = iVar1 >> 1;
  }
  if ((iVar1 == 0) && (iVar1 = 1, param_3 < 1)) {
    iVar1 = -1;
  }
  return iVar1;
}

