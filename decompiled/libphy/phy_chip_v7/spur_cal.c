/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> spur_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int spur_cal(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((param_4 != 0) && (param_3 != 0)) {
    iVar1 = ((param_1 * param_4) / param_3) * param_3;
    iVar2 = (iVar1 * 10) / param_4;
    if (param_1 * 10 - iVar2 < param_2 * 10) {
      return iVar2 + param_1 * -10;
    }
    iVar1 = param_1 * -10 + ((param_3 + iVar1) * 10) / param_4;
    if (param_2 * 10 <= iVar1) {
      return 0;
    }
  }
  return iVar1;
}

