/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_i2c.o -> i2c_clk_sel
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_clk_sel(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0x7c) << 4;
  uVar1 = param_1 >> 1 & 0x3f;
  _DAT_600af824 = _DAT_600af824 & 0xfffff800 | uVar2 | uVar1;
  _DAT_600af828 = _DAT_600af828 & 0xfffff800 | uVar2 | uVar1;
  _DAT_600af82c = uVar1 | _DAT_600af82c & 0xfffff800 | uVar2;
  return;
}

