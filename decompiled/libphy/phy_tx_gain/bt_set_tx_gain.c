/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_tx_gain.o -> bt_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_set_tx_gain(undefined4 param_1)

{
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [52];
  
  bt_get_tx_tab(auStack_88,auStack_60,auStack_38,param_1);
  set_tx_gain_mem(1,0x14,auStack_88,auStack_60,auStack_38);
  return;
}

