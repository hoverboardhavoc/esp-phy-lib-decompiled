/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rfpll.o -> set_channel_rfpll_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int set_channel_rfpll_freq(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = chan_to_freq();
  if ((iVar1 - 0x960U & 0xffff) < 0x55) {
    set_chan_freq_sw_start(iVar1 - 0x960U & 0xff,param_1);
  }
  else {
    set_rf_freq_offset(param_1,iVar1,param_2);
  }
  return iVar1;
}

