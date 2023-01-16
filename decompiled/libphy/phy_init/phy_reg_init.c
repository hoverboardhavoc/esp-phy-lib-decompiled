/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
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
  agc_reg_init_new(DAT_00010b6d,DAT_00010b6c);
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

