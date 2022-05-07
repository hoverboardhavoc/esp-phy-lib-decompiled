/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
 * Source: libphy -> phy_init.o -> rf_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_init(void)

{
  int iVar1;
  
  (**(code **)(g_phyFuns + 0x138))(*(code **)(g_phyFuns + 0x138));
  i2c_bbpll_set(1);
  bias_reg_set(1);
  i2c_rc_cal_set(2,2,5);
  (**(code **)(g_phyFuns + 0x10c))(*(code **)(g_phyFuns + 0x10c));
  (**(code **)(g_phyFuns + 0x114))(*(code **)(g_phyFuns + 0x114));
  tsens_read_init(phy_param);
  (**(code **)(g_phyFuns + 0xdc))(*(code **)(g_phyFuns + 0xdc));
  phy_get_i2c_data();
  phy_i2c_init1();
  iVar1 = (**(code **)(g_phyFuns + 0x54))(0x69,0,4,3,0,*(code **)(g_phyFuns + 0x54));
  if (iVar1 == 0) {
    i2c_sar2_init_code(0x578);
  }
  rc_cal_init();
  phy_i2c_init2();
  set_chan_freq_hw_init(0,2);
  get_temp_init();
  return;
}

