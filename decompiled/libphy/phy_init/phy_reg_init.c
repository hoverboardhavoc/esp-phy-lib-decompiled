/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_init.o -> phy_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_reg_init(void)

{
  reg_set_new();
  iq_corr_enable();
  agc_reg_init_new(DAT_00010afd,DAT_00010afc);
  wifi_agc_sat_gain(0x81828);
  bb_reg_init_new();
  bb_wdg_cfg();
  tx_paon_set_new();
  rx_11b_opt();
  tx_pwctrl_bg_init();
  noise_floor_auto_set();
  phy_ant_init();
  bt_filter_reg_new();
  mac_enable_bb(1);
  return;
}

