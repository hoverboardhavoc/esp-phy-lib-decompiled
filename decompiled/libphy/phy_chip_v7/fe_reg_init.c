/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> fe_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fe_reg_init(void)

{
  _DAT_6000607c = _DAT_6000607c & 0xdfffffff | 0xc0000000;
  _DAT_60006078 = _DAT_60006078 | 0x42000000;
  _DAT_60006040 = _DAT_60006040 | 0x20000000;
  _DAT_6000608c = _DAT_6000608c & 0xf9ffffff | 0x6000000;
  _DAT_6000610c = _DAT_6000610c | 0x4000;
  _DAT_60006100 = _DAT_60006100 & 0xffc0ffff;
  _DAT_60006094 = _DAT_60006094 & 0xfffffeff;
  _DAT_60006088 = _DAT_60006088 & 0xff00ffff | 0xc0000;
  _DAT_60006000 = _DAT_60006000 & 0xf803ffff | 0xa800000;
  _DAT_60006110 = _DAT_60006110 & 0xfe3fffff | 0x1400000;
  return;
}

