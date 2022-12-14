/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_pbus.o -> ram_pbus_rd_addr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 ram_pbus_rd_addr(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0:
    break;
  case 1:
    return 0x600a0914;
  case 2:
    if (param_2 != 1) {
      return 0x600a091c;
    }
    return 0x600a0918;
  case 3:
    return 0x600a091c;
  case 4:
    if (param_2 != 1) {
      return 0x600a0924;
    }
    break;
  default:
    return 0x600a0924;
  }
  return 0x600a0920;
}

