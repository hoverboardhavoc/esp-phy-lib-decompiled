/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
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
    phy_set_chan_freq(iVar1 - 0x60U & 0xff);
  }
  return iVar1;
}

