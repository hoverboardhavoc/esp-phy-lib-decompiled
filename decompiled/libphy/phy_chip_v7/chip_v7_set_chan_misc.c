/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> chip_v7_set_chan_misc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void chip_v7_set_chan_misc(undefined1 param_1)

{
  undefined1 auStack_11 [9];
  
  auStack_11[0] = DAT_0001456d;
  wr_rx_gain_mem(0,1,auStack_11,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,DAT_00014672 + '\x01',0);
  rom_set_chan_reg(1);
  ram_wifi_set_tx_gain(param_1,0);
  return;
}

