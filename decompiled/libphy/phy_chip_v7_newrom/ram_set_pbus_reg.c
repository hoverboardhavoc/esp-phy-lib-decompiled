/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_set_pbus_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_set_pbus_reg(void)

{
  _DAT_600060e0 = 0x5040300;
  _DAT_600060e4 = 0xf0e0d06;
  _DAT_600060e8 = 0x14131210;
  _DAT_600060ec = 0x1a191815;
  _DAT_600060f0 = 0x2423221b;
  _DAT_600060f4 = 0x29282725;
  return;
}

