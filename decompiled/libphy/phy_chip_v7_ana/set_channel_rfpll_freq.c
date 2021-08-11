/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> set_channel_rfpll_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int set_channel_rfpll_freq(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = chan_to_freq();
  if ((_phy_param & 0x20) == 0) {
    set_rf_freq_offset(param_1,iVar1,param_2);
  }
  else {
    set_chan_freq_sw_start(iVar1 - 0x60U & 0xff,param_1);
  }
  return iVar1;
}

