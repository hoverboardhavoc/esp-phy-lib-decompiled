/*
 * Last changed at upstream commit 05e53904ac98632e09d78693437b7fa0b35f36da
 * https://github.com/espressif/esp-phy-lib/commit/05e53904ac98632e09d78693437b7fa0b35f36da
 * Upstream date: 2023-05-22 12:26:13 +0800
 * Upstream subject: update h2 libphy phy_version: 200,0, 1cef4f4, May 22 2023, 11:57:13
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
  phy_chan_hw_init();
  open_i2c_xpd(0);
  i2c_clk_sel(2);
  phy_dis_hw_set_freq();
  i2c_master_reset();
  set_pbus_reg();
  fe_reg_init();
  tsens_read_init(1,DAT_000105ec);
  write_chan_freq((short)DAT_0001062d);
  phy_i2c_init1();
  phy_reg_init();
  wait_freq_set_busy();
  enable_agc();
  phy_en_hw_set_freq();
  exit_critical_phy(uVar1);
  return;
}

