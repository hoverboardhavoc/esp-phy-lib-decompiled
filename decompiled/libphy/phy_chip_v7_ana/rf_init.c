/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_ana.o -> rf_init
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
  
  (**(code **)(_g_phyFuns + 0x1fc))(*(code **)(_g_phyFuns + 0x1fc));
  (**(code **)(_g_phyFuns + 0xac))(*(code **)(_g_phyFuns + 0xac));
  (**(code **)(_g_phyFuns + 0xb4))(*(code **)(_g_phyFuns + 0xb4));
  (**(code **)(_g_phyFuns + 0x204))(DAT_000120b6,*(code **)(_g_phyFuns + 0x204));
  (**(code **)(_g_phyFuns + 0x160))(*(code **)(_g_phyFuns + 0x160));
  rom_fe_i2c_reg_renew();
  _DAT_60006110 = _DAT_60006110 & 0xfffffcff;
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,3,0,0xc,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,1,3,0,0xc,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,7,7,4,7,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,7,4,0xc,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,9,3,2,3,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,10,1,0,1,*(code **)(_g_phyFuns + 0x1bc));
  DAT_000120dd = (**(code **)(_g_phyFuns + 0x1ac))(0x66,0,9,*(code **)(_g_phyFuns + 0x1ac));
  DAT_000120de = (**(code **)(_g_phyFuns + 0x1ac))(0x66,0,10,*(code **)(_g_phyFuns + 0x1ac));
  (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
  uStack_18 = 0x1000100;
  uStack_14 = 0x1000100;
  (**(code **)(_g_phyFuns + 0x1f0))(&uStack_18,*(code **)(_g_phyFuns + 0x1f0));
  (**(code **)(_g_phyFuns + 0x1e8))(*(code **)(_g_phyFuns + 0x1e8));
  (**(code **)(_g_phyFuns + 0x1e0))(*(code **)(_g_phyFuns + 0x1e0));
  (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
  phy_get_i2c_data();
  rom_phy_i2c_init1();
  rc_cal();
  phy_i2c_init2();
  set_chan_freq_hw_init(2,4);
  DAT_000120c5 = 0x1b;
  _DAT_000120c6 = 0x1b1b;
  return;
}

