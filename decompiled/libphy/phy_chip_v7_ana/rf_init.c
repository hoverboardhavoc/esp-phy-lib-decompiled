/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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
  i2c_bbpll_set();
  (**(code **)(_g_phyFuns + 0xac))(*(code **)(_g_phyFuns + 0xac));
  (**(code **)(_g_phyFuns + 0xb4))(*(code **)(_g_phyFuns + 0xb4));
  (**(code **)(_g_phyFuns + 0x204))(DAT_000120ae,*(code **)(_g_phyFuns + 0x204));
  (**(code **)(_g_phyFuns + 0x160))(*(code **)(_g_phyFuns + 0x160));
  ram_fe_i2c_reg_renew();
  _DAT_60006110 = _DAT_60006110 & 0xfffffcff;
  bias_reg_set(phy_current_level);
  (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
  uStack_18 = 0x1000100;
  uStack_14 = 0x1000100;
  (**(code **)(_g_phyFuns + 0x1f0))(&uStack_18,*(code **)(_g_phyFuns + 0x1f0));
  (**(code **)(_g_phyFuns + 0x1e8))(*(code **)(_g_phyFuns + 0x1e8));
  (**(code **)(_g_phyFuns + 0x1e0))(*(code **)(_g_phyFuns + 0x1e0));
  (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
  phy_get_i2c_data();
  ram_phy_i2c_init1();
  rc_cal();
  phy_i2c_init2();
  set_chan_freq_hw_init(2,4);
  DAT_000120bd = 0x1b;
  _DAT_000120be = 0x1b1b;
  return;
}

