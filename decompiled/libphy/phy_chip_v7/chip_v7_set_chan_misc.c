/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> chip_v7_set_chan_misc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void chip_v7_set_chan_misc(undefined1 param_1)

{
  undefined1 auStack_11 [9];
  
  auStack_11[0] = DAT_00014021;
  wr_rx_gain_mem(0,1,auStack_11,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,DAT_00014126 + '\x01',0);
  rom_set_chan_reg(1);
  ram_wifi_set_tx_gain(param_1,0);
  return;
}

