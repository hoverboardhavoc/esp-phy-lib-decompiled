/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
 * Source: libphy -> phy_init.o -> ram_phy_wakeup_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_phy_wakeup_init(void)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(g_phyFuns + 0x184))(*(code **)(g_phyFuns + 0x184));
  _DAT_6000e130 = _DAT_6000e130 & 0xfffdffff | 0x20000;
  (**(code **)(g_phyFuns + 0x228))(*(code **)(g_phyFuns + 0x228));
  tsens_read_init_new(0,DAT_00010e72);
  _DAT_60006110 = _DAT_60006110 & 0xfffffcff | 0x200;
  (**(code **)(g_phyFuns + 0x1b4))(0x66,0,9,DAT_00010e99,*(code **)(g_phyFuns + 0x1b4));
  (**(code **)(g_phyFuns + 0x1b4))(0x66,0,10,DAT_00010e9a,*(code **)(g_phyFuns + 0x1b4));
  (**(code **)(g_phyFuns + 0xd4))(*(code **)(g_phyFuns + 0xd4));
  (**(code **)(g_phyFuns + 0xb4))(*(code **)(g_phyFuns + 0xb4));
  ram_fe_i2c_reg_renew();
  (**(code **)(g_phyFuns + 0x124))(*(code **)(g_phyFuns + 0x124));
  ram_wifi_tx_dig_gain(&DAT_00010f82);
  rom_bt_tx_dig_gain(&DAT_00010f72);
  (**(code **)(g_phyFuns + 0xcc))(*(code **)(g_phyFuns + 0xcc));
  (**(code **)(g_phyFuns + 0x160))(*(code **)(g_phyFuns + 0x160));
  (**(code **)(g_phyFuns + 0x1fc))(*(code **)(g_phyFuns + 0x1fc));
  ram_phy_i2c_init1();
  (**(code **)(g_phyFuns + 0xd8))(DAT_00010fba,*(code **)(g_phyFuns + 0xd8));
  rom_phy_reg_init();
  rom_set_chan_reg(0);
  phy_set_tsens_power(1);
  _DAT_60006110 = _DAT_60006110 & 0xfffffdff;
  (**(code **)(g_phyFuns + 4))(*(code **)(g_phyFuns + 4));
  (**(code **)(g_phyFuns + 0x224))(*(code **)(g_phyFuns + 0x224));
  rom_phy_bbpll_cal(0);
                    /* WARNING: Could not recover jumptable at 0x0001025e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(g_phyFuns + 0x188))(uVar1);
  return;
}

