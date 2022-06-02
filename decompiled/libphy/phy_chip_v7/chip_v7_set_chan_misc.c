/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> chip_v7_set_chan_misc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void chip_v7_set_chan_misc(undefined1 param_1)

{
  undefined1 auStack_11 [9];
  
  auStack_11[0] = DAT_00014515;
  wr_rx_gain_mem(0,1,auStack_11,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,DAT_0001461a + '\x01',0);
  rom_set_chan_reg(1);
  ram_wifi_set_tx_gain(param_1,0);
  return;
}

