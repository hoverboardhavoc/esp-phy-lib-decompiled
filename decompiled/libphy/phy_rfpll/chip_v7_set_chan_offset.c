/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
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
  if (DAT_0001104a != '\0') {
    _DAT_00011026 = _DAT_00011026 + (short)((int)DAT_0001104b << 3);
  }
  phy_freq_correct(1,(int)(short)_DAT_00011026);
  disable_wifi_agc();
  set_channel_rfpll_freq((short)DAT_0001106d,DAT_00011049,(int)(short)_DAT_00011026);
  enable_wifi_agc();
  exit_critical_phy(uVar1);
  return;
}

