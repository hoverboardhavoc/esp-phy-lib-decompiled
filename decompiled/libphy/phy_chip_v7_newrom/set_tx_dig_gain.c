/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> set_tx_dig_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_tx_dig_gain(int param_1,uint param_2)

{
  if (param_1 != 0) {
    _DAT_60006000 = _DAT_60006000 & 0xfbffffff;
    _DAT_60006088 = (param_2 & 0xff) << 8 | _DAT_60006088 & 0xffff00ff;
    return;
  }
  _DAT_60006000 = _DAT_60006000 | 0x4000000;
  _DAT_60006088 = _DAT_60006088 & 0xffff00ff;
  return;
}

