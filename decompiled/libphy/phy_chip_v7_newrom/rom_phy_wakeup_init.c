/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_phy_wakeup_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_phy_wakeup_init(void)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x184))(*(code **)(_g_phyFuns + 0x184));
  _DAT_6000e130 = _DAT_6000e130 & 0xfffdffff | 0x20000;
  _DAT_60006110 = _DAT_60006110 & 0xfffffcff | 0x200;
  (**(code **)(_g_phyFuns + 0x1b4))
            (0x66,0,9,*(undefined1 *)(phy_param_rom + 0xd1),*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))
            (0x66,0,10,*(undefined1 *)(phy_param_rom + 0xd2),*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x228))(*(code **)(_g_phyFuns + 0x228));
  rom_i2c_master_reset();
  (**(code **)(_g_phyFuns + 0xd4))(*(code **)(_g_phyFuns + 0xd4));
  (**(code **)(_g_phyFuns + 0xb4))(*(code **)(_g_phyFuns + 0xb4));
  rom_fe_i2c_reg_renew();
  (**(code **)(_g_phyFuns + 0x124))(*(code **)(_g_phyFuns + 0x124));
  rom_wifi_tx_dig_gain(phy_param_rom + 0x1ba);
  rom_bt_tx_dig_gain(phy_param_rom + 0x1aa);
  (**(code **)(_g_phyFuns + 0xcc))(*(code **)(_g_phyFuns + 0xcc));
  (**(code **)(_g_phyFuns + 0x160))(*(code **)(_g_phyFuns + 0x160));
  (**(code **)(_g_phyFuns + 0x1fc))(*(code **)(_g_phyFuns + 0x1fc));
  rom_phy_i2c_init1();
  (**(code **)(_g_phyFuns + 0xd8))
            (*(undefined1 *)(phy_param_rom + 0x1f2),*(code **)(_g_phyFuns + 0xd8));
  rom_phy_reg_init();
  rom_set_chan_reg(0);
  _DAT_60040058 = _DAT_60040058 | 0x400000;
  _DAT_60006110 = _DAT_60006110 & 0xfffffdff;
  (**(code **)(_g_phyFuns + 4))(*(code **)(_g_phyFuns + 4));
  (**(code **)(_g_phyFuns + 0x224))(*(code **)(_g_phyFuns + 0x224));
  rom_phy_bbpll_cal(0);
                    /* WARNING: Could not recover jumptable at 0x00011132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x188))(uVar1);
  return;
}

