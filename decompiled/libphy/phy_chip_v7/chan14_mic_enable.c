/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> chan14_mic_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00012942) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chan14_mic_enable(int param_1,int param_2)

{
  DAT_0001450a = (undefined1)param_1;
  if (param_1 == 0) {
    _DAT_6001c400 = _DAT_6001c400 | 0x6000;
    ram_wifi_set_tx_gain(DAT_00014616,0);
    return;
  }
  DAT_00014508 = (undefined1)param_2;
  if (0x30 < param_2) {
    DAT_00014508 = 0x30;
  }
  return;
}

