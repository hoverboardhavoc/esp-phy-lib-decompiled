/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> bt_track_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_track_pll_cap(void)

{
  undefined4 uVar1;
  undefined1 auStack_11 [5];
  
  uVar1 = enter_critical_phy();
  DAT_00012076 = 1;
  if (_write_chan_freq == 0) {
    while ((int)_DAT_6000e168 < 0) {
      ets_delay_us(2);
    }
    pll_correct_dcap(_DAT_6000e168 >> 0x18 & 0x7f,auStack_11);
  }
  exit_critical_phy(uVar1);
  return;
}

