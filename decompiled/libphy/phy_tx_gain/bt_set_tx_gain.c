/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_tx_gain.o -> bt_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_set_tx_gain(undefined4 param_1)

{
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [44];
  
  bt_get_tx_tab(auStack_50,auStack_30,auStack_60,param_1);
  set_tx_gain_mem(1,0x10,auStack_50,auStack_30,auStack_60,&phy_param,&phy_param);
  return;
}

