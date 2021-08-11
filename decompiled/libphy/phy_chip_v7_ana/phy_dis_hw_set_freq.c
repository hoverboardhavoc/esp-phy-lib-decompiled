/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> phy_dis_hw_set_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_dis_hw_set_freq(void)

{
  do {
    if (-1 < _DAT_6000e168) break;
  } while ((_DAT_6000e0c4 & 0x100) == 0);
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xe7ffffff | 0x10000000;
  ets_delay_us(2);
  return;
}

