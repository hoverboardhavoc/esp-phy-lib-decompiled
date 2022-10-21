/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_rfpll.o -> chip_v7_set_chan_misc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void chip_v7_set_chan_misc(undefined1 param_1)

{
  undefined1 auStack_11 [9];
  
  auStack_11[0] = DAT_00011101;
  wr_rx_gain_mem(0,1,auStack_11,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,DAT_00011206 + '\x01',0);
  rom_set_chan_reg(1);
  ram_wifi_set_tx_gain(param_1,0);
  return;
}

