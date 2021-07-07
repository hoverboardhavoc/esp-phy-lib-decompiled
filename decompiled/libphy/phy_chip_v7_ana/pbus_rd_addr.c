/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> pbus_rd_addr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 pbus_rd_addr(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0:
    break;
  case 1:
    if (param_2 != 1) {
      return 0x600060ac;
    }
    break;
  case 2:
    return 0x600060ac;
  case 3:
  case 4:
    return 0x600060b0;
  case 5:
    return 0x600060b4;
  default:
    return param_1;
  }
  return 0x600060a8;
}

