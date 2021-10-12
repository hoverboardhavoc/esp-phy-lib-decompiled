/*
 * Last changed at upstream commit b7095b90157d98f116ba43c35b12d51192dc91c8
 * https://github.com/espressif/esp-phy-lib/commit/b7095b90157d98f116ba43c35b12d51192dc91c8
 * Upstream date: 2021-10-12 21:50:40 +0800
 * Upstream subject: Update libphy and libbb
 * Source: libphy -> phy_chip_v7.o -> chan14_mic_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x0001259c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chan14_mic_enable(int param_1,int param_2)

{
  DAT_00012eee = (undefined1)param_1;
  if (param_1 == 0) {
    _DAT_6001c400 = _DAT_6001c400 | 0x6000;
    wifi_set_tx_gain(DAT_00012fd0,0);
    return;
  }
  DAT_00012eec = (undefined1)param_2;
  if (0x30 < param_2) {
    DAT_00012eec = 0x30;
  }
  return;
}

