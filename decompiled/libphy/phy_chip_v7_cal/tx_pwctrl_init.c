/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> tx_pwctrl_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pwctrl_init(undefined4 param_1)

{
  if (-1 < (int)(_chip7_sleep_params << 0xb)) {
    txcal_debuge_mode();
    tx_pwctrl_init_cal(6,param_1);
    tx_pwctrl_init_cal(1,param_1);
    tx_pwctrl_init_cal(0xb,param_1);
    _DAT_0001403a = _set_txclk_en;
    phy_chan_gain_table._2_2_ = _phy_set_most_tpw_index;
    phy_chan_gain_table._4_2_ = _DAT_0001409e;
    phy_chan_gain_table._6_2_ = (undefined2)phy_chan_gain_table;
    txcal_work_mode();
    _DAT_000140ec = _tx_rf_ana_gain;
    _DAT_000140ee = _DAT_0001402e;
    _chip7_sleep_params = _chip7_sleep_params | 0x100000;
    phy_chan_pwr_index[0xd] = 0xe;
  }
  _tx_rf_ana_gain = _DAT_000140ec;
  _DAT_0001402e = _DAT_000140ee;
  return;
}

