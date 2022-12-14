/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_i2c.o -> ram_get_i2c_mst0_mask
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined2 ram_get_i2c_mst0_mask(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x61U & 0xff;
  if (uVar1 < 0xd) {
    return *(undefined2 *)(&_LANCHOR1 + uVar1 * 2);
  }
  return 0;
}

