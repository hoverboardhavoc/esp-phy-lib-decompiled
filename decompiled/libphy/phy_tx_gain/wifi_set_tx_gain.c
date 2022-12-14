/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_tx_gain.o -> wifi_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wifi_set_tx_gain(undefined4 param_1)

{
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [76];
  
  wifi_get_tx_tab(auStack_b0,auStack_90,auStack_50,param_1);
  if (phy_param == '\0') {
    set_tx_gain_mem(0,0x20,auStack_50,auStack_90,auStack_b0,&phy_param,&phy_param);
  }
  return;
}

