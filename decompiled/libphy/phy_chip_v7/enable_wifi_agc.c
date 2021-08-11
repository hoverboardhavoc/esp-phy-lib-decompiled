/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> enable_wifi_agc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void enable_wifi_agc(void)

{
  _DAT_6001c080 = _DAT_6001c080 & 0xfffffffe;
  _DAT_6001c01c = _DAT_6001c01c & 0xff00ffff | 0x200000;
  _DAT_6001c034 = _DAT_6001c034 | 0x80;
  return;
}

