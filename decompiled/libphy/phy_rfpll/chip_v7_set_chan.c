/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
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
  DAT_0001106d = (undefined1)param_1;
  set_channel_rfpll_freq(param_1,DAT_00011049,(int)_DAT_00011026);
  exit_critical_phy(uVar1);
  return;
}

