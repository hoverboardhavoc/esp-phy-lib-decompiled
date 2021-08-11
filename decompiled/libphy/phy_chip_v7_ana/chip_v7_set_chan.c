/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> chip_v7_set_chan
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chip_v7_set_chan(undefined1 param_1,int param_2)

{
  DAT_00013179 = param_2 != 0;
  DAT_0001317a = (undefined1)param_2;
  DAT_00013178 = param_1;
  set_channel_rfpll_freq(DAT_000130a3,(int)_DAT_00013090);
  bb_bss_cbw40(param_2);
  return;
}

