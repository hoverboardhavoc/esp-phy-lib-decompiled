/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> rf_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rf_init(void)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  (**(code **)(g_phyFuns + 0x1fc))(*(code **)(g_phyFuns + 0x1fc));
  i2c_bbpll_set();
  (**(code **)(g_phyFuns + 0xac))(*(code **)(g_phyFuns + 0xac));
  (**(code **)(g_phyFuns + 0xb4))(*(code **)(g_phyFuns + 0xb4));
  tsens_read_init_new(1,(undefined1)phy_param);
  (**(code **)(g_phyFuns + 0x160))(*(code **)(g_phyFuns + 0x160));
  ram_fe_i2c_reg_renew();
  _DAT_60006110 = _DAT_60006110 & 0xfffffcff;
  bias_reg_set(phy_current_level);
  (**(code **)(g_phyFuns + 0x1d4))(*(code **)(g_phyFuns + 0x1d4));
  uStack_18 = 0x1000100;
  uStack_14 = 0x1000100;
  (**(code **)(g_phyFuns + 0x1f0))(&uStack_18,*(code **)(g_phyFuns + 0x1f0));
  (**(code **)(g_phyFuns + 0x1e8))(*(code **)(g_phyFuns + 0x1e8));
  (**(code **)(g_phyFuns + 0x1e0))(*(code **)(g_phyFuns + 0x1e0));
  (**(code **)(g_phyFuns + 0x1d8))(*(code **)(g_phyFuns + 0x1d8));
  phy_get_i2c_data();
  ram_phy_i2c_init1();
  rc_cal();
  phy_i2c_init2();
  set_chan_freq_hw_init(2,4);
  return;
}

