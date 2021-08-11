/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> write_txrate_power_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_txrate_power_offset(void)

{
  _DAT_60006180 = 0;
  _DAT_60006184 = 0x11111111;
  _DAT_60006188 = 0;
  _DAT_6000618c = 0x11111111;
  _DAT_60006190 = 0x44445555;
  _DAT_60006194 = 0x22223333;
  _DAT_60006198 = 0x44445555;
  _DAT_6000619c = 0x22223333;
  _DAT_600061a0 = 0xa666a666;
  _DAT_600061a4 = 0xb777b777;
  _DAT_600061a8 = 0xc888c888;
  _DAT_600061ac = 0xd999d999;
  _DAT_600061b0 = 0x76543210;
  _DAT_600061b4 = 0xfedcba98;
  _DAT_600061b8 = 0x76543210;
  _DAT_600061bc = 0xfedcba98;
  return;
}

