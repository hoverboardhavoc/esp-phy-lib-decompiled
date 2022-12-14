/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_reg.o -> open_i2c_xpd_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void open_i2c_xpd_new(void)

{
  uint uVar1;
  
  _DAT_600b00cc = _DAT_600b00cc | 0x10000000;
  uVar1 = _DAT_600b0154 | 0xf0000000;
  if (-1 < (int)(_DAT_600b0154 << 4)) {
    uVar1 = _DAT_600b0154 & 0xfbffffff | 0xfc000000;
  }
  _DAT_600b0154 = uVar1;
  if (-1 < (int)(_DAT_600b0154 << 5)) {
    _DAT_600b0154 = _DAT_600b0154 | 0x4000000;
  }
  return;
}

