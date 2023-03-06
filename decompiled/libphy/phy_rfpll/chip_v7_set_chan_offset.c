/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_rfpll.o -> chip_v7_set_chan_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chip_v7_set_chan_offset(short param_1)

{
  undefined4 uVar1;
  
  uVar1 = enter_critical_phy();
  _DAT_00011026 = param_1 + 2U & 0xfffc;
  if (DAT_0001103c != '\0') {
    _DAT_00011026 = _DAT_00011026 + (short)((int)DAT_0001103d << 3);
  }
  phy_freq_correct(1,(int)(short)_DAT_00011026);
  disable_wifi_agc();
  set_channel_rfpll_freq((short)DAT_00011067,DAT_0001103b,(int)(short)_DAT_00011026);
  enable_wifi_agc();
  exit_critical_phy(uVar1);
  return;
}

