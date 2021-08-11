/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> chip_v7_set_chan_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chip_v7_set_chan_offset(short param_1)

{
  _DAT_00013090 = param_1 + 2U & 0xfffc;
  if (DAT_000130fa != '\0') {
    _DAT_00013090 = _DAT_00013090 + (short)((int)DAT_000130fb << 3);
  }
  phy_freq_correct_part_1((int)(short)_DAT_00013090);
  disable_wifi_agc();
  set_channel_rfpll_freq((int)DAT_00013178,DAT_000130a3,(int)(short)_DAT_00013090);
  enable_wifi_agc();
  return;
}

