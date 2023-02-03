/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
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
  DAT_00011064 = (undefined1)param_1;
  set_channel_rfpll_freq(param_1,DAT_0001103b,(int)_DAT_00011026);
  exit_critical_phy(uVar1);
  return;
}

