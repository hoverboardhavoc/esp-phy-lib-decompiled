/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_ana.o -> chip_v7_set_chan_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chip_v7_set_chan_offset(short param_1)

{
  _DAT_00013094 = param_1 + 2U & 0xfffc;
  if (DAT_000130fe != '\0') {
    _DAT_00013094 = _DAT_00013094 + (short)((int)DAT_000130ff << 3);
  }
  phy_freq_correct_part_1((int)(short)_DAT_00013094);
  disable_wifi_agc();
  set_channel_rfpll_freq((int)DAT_0001317c,DAT_000130a7,(int)(short)_DAT_00013094);
  enable_wifi_agc();
  return;
}

