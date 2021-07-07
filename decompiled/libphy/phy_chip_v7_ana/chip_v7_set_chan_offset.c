/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> chip_v7_set_chan_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void chip_v7_set_chan_offset(short param_1)

{
  undefined4 uVar1;
  
  uVar1 = phy_enter_critical();
  phy_freq_offset = param_1 + 2U & 0xfffc;
  if (DAT_00013090 != '\0') {
    phy_freq_offset = phy_freq_offset + (short)((int)DAT_00013091 << 3);
  }
  phy_freq_correct(1,(int)(short)phy_freq_offset);
  set_channel_rfpll_freq((int)chip7_sleep_params,DAT_00013025,(int)(short)phy_freq_offset);
  phy_exit_critical(uVar1);
  return;
}

