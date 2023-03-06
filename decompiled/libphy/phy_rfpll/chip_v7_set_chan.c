/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_rfpll.o -> chip_v7_set_chan
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chip_v7_set_chan(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = enter_critical_phy();
  DAT_00011067 = (undefined1)param_1;
  set_channel_rfpll_freq(param_1,DAT_0001103b,(int)_DAT_00011026);
  exit_critical_phy(uVar1);
  return;
}

