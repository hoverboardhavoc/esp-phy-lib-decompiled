/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> phy_wakeup_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_wakeup_init(void)

{
  undefined4 uVar1;
  
  uVar1 = enter_critical_phy();
  _DAT_6000e130 = _DAT_6000e130 & 0xfffdffff | 0x20000;
  _DAT_60006110 = _DAT_60006110 & 0xfffffcff | 0x200;
  phy_dis_hw_set_freq();
  i2c_master_reset();
  set_pbus_reg();
  fe_reg_init();
  write_txrate_power_offset();
  bt_tx_dig_gain(&phy_param);
  fe_txrx_reset();
  tx_pwctrl_bg_init();
  open_i2c_xpd();
  write_chan_freq(phy_param);
  phy_reg_init();
  set_chan_reg(0);
  _DAT_60040058 = _DAT_60040058 | 0x400000;
  _DAT_60006110 = _DAT_60006110 & 0xfffffdff;
  enable_agc();
  phy_en_hw_set_freq();
  phy_bbpll_cal(0);
  exit_critical_phy(uVar1);
  return;
}

