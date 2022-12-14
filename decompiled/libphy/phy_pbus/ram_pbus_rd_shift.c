/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_pbus.o -> ram_pbus_rd_shift
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 ram_pbus_rd_shift(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = 9;
    if (param_2 == 1) {
      return 0x12;
    }
    break;
  case 1:
  case 3:
    if (param_2 != 1) {
      return 0;
    }
  case 5:
    uVar1 = 9;
    break;
  case 2:
  case 4:
    uVar1 = 0x12;
    if (param_2 == 1) {
      return 0;
    }
    break;
  default:
    return 0;
  }
  return uVar1;
}

