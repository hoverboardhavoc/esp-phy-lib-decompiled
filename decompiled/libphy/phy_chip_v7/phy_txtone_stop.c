/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> phy_txtone_stop
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_txtone_stop(void)

{
  start_tx_tone_step(0,0,0,0,0,0);
  _DAT_60006000 = _DAT_60006000 & 0xfffffffd;
  (**(code **)(g_phyFuns + 200))(0,*(code **)(g_phyFuns + 200));
  chip_v7_set_chan((int)DAT_00014616,(int)DAT_00014618);
  return;
}

