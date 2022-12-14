/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_init.o -> rf_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rf_init(void)

{
  int iVar1;
  
  open_i2c_xpd_new();
  i2c_clk_sel(8);
  i2c_bbpll_set(1);
  bias_reg_set(1);
  i2cmst_reg_init();
  pwdet_reg_init_new();
  fe_reg_init();
  reg_set_new();
  tsens_read_init_new(1,phy_param);
  tx_pwctrl_bg_init();
  _DAT_600a0910 = _DAT_600a0910 & 0xfffffcff;
  i2c_rc_cal_set(3,1);
  rc_cal_init();
  filter_dcap_set();
  phy_i2c_init1();
  phy_i2c_master_cmd_mem_init();
  iVar1 = (**(code **)(g_phyFuns + 0x5c))(0x69,0,4,3,0,*(code **)(g_phyFuns + 0x5c));
  if (iVar1 == 0) {
    i2c_sar2_init_code(0x578);
  }
  set_chan_freq_hw_init(2,4);
  return;
}

