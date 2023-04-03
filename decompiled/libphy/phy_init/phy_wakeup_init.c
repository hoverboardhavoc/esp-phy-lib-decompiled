/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
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
  open_i2c_xpd(0);
  phy_dis_hw_set_freq();
  i2c_master_reset();
  set_pbus_reg();
  fe_reg_init();
  tsens_read_init(1,DAT_00010564);
  write_chan_freq((short)DAT_000105a5);
  phy_i2c_init1();
  phy_reg_init();
  wait_freq_set_busy();
  enable_agc();
  phy_en_hw_set_freq();
  exit_critical_phy(uVar1);
  return;
}

