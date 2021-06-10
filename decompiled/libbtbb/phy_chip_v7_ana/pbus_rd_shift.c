/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> pbus_rd_shift
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

