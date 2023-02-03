/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_init.o -> phy_wakeup_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_wakeup_init(void)

{
  undefined4 uVar1;
  
  uVar1 = enter_critical_phy();
  phy_dis_hw_set_freq();
  i2c_master_reset();
  set_pbus_reg();
  i2cmst_reg_init();
  fe_reg_init();
  write_txrate_power_offset();
  open_i2c_xpd(0);
  i2c_rfpll_init();
  freq_reg_init(2,4);
  write_chan_freq((short)phy_param);
  phy_reg_init();
  enable_agc();
  phy_en_hw_set_freq();
  phy_bbpll_cal(0);
  exit_critical_phy(uVar1);
  return;
}

