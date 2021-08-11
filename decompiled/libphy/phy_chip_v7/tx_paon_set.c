/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> tx_paon_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_paon_set(void)

{
  _DAT_6001d000 = _DAT_6001d000 & 0xffe007ff | 0xa000;
  _DAT_600060f8 = _DAT_600060f8 & 0xffff00ff | 0x9c00;
  _DAT_6001d06c = 0x6e2b49e;
  _DAT_6001c400 = _DAT_6001c400 & 0xfff8ffff;
  return;
}

