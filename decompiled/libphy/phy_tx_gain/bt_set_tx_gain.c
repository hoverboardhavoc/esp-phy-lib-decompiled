/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_tx_gain.o -> bt_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_set_tx_gain(undefined4 param_1)

{
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [44];
  
  bt_get_tx_tab(auStack_70,auStack_50,auStack_30,param_1);
  set_tx_gain_mem(1,0x10,auStack_70,auStack_50,auStack_30);
  return;
}

