/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
 * Source: libphy -> phy_i2c.o -> phy_get_i2c_data_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_i2c_data_new(void)

{
  DAT_000110bd = 2;
  _DAT_000110be = 0x972;
  _DAT_000110c0 = 0xfb8801d4;
  _DAT_000110c4 = 0x2c29a811;
  _DAT_000110c8 = 0x70f0a080;
  _DAT_000110cc = 0x4100ab70;
  DAT_000110d0 = 0x26;
  return;
}

