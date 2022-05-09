/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
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
  i2c_bbpll_set_new(1);
  bias_reg_set_new(1);
  (**(code **)(g_phyFuns + 0x10c))(*(code **)(g_phyFuns + 0x10c));
  (**(code **)(g_phyFuns + 0x114))(*(code **)(g_phyFuns + 0x114));
  tsens_read_init(phy_param);
  (**(code **)(g_phyFuns + 0xdc))(*(code **)(g_phyFuns + 0xdc));
  phy_get_i2c_data_new();
  phy_i2c_init1();
  iVar1 = (**(code **)(g_phyFuns + 0x54))(0x69,0,4,3,0,*(code **)(g_phyFuns + 0x54));
  if (iVar1 == 0) {
    i2c_sar2_init_code(0x578);
  }
  i2c_rc_cal_set(3,1,10);
  rc_cal_init();
  phy_i2c_init2();
  set_chan_freq_hw_init(0,2);
  get_temp_init();
  return;
}

