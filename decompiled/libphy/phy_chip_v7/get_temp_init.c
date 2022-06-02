/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> get_temp_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_temp_init(void)

{
  rom_tsens_temp_read();
  DAT_00014636 = DAT_000144b6;
  if (DAT_00014628 == '\x11') {
    DAT_00014636 = DAT_00014630;
  }
  DAT_000144ba = DAT_00014636;
  DAT_000144b8 = DAT_00014636;
  return;
}

