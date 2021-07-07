/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> pbus_rd_shift
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 pbus_rd_shift(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 1:
    uVar1 = 0x12;
    if (param_2 == 1) {
      return 0;
    }
    break;
  case 2:
    if (param_2 != 1) {
      return 0;
    }
  case 0:
    uVar1 = 9;
    break;
  case 3:
    uVar1 = 9;
    if (param_2 == 1) {
      return 0x12;
    }
    break;
  case 4:
  case 5:
    return 0;
  default:
    return param_1;
  }
  return uVar1;
}

