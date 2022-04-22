/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_ana.o -> phy_get_i2c_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_i2c_data(void)

{
  DAT_000120c1 = 0x1b;
  _DAT_000120c2 = 0x877;
  _DAT_000120c4 = 0x5f080a64;
  _DAT_000120c8 = 0x7f05740a;
  _DAT_000120cc = 0x3f02f000;
  _DAT_000120d0 = 0x4191f3b0;
  DAT_000120d4 = 0x26;
  return;
}

