/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_phy_wakeup_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_phy_wakeup_init(void)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x184))(*(code **)(_g_phyFuns + 0x184));
  (**(code **)(_g_phyFuns + 0x228))(*(code **)(_g_phyFuns + 0x228));
  (**(code **)(_g_phyFuns + 0x204))(DAT_000120ae,*(code **)(_g_phyFuns + 0x204));
  _DAT_60006110 = _DAT_60006110 & 0xfffffcff | 0x200;
  (**(code **)(_g_phyFuns + 0x1b4))(0x66,0,9,DAT_000120d5,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x66,0,10,DAT_000120d6,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0xd4))(*(code **)(_g_phyFuns + 0xd4));
  (**(code **)(_g_phyFuns + 0xb4))(*(code **)(_g_phyFuns + 0xb4));
  ram_fe_i2c_reg_renew();
  (**(code **)(_g_phyFuns + 0x124))(*(code **)(_g_phyFuns + 0x124));
  ram_wifi_tx_dig_gain(&phy_param);
  rom_bt_tx_dig_gain(&phy_param);
  (**(code **)(_g_phyFuns + 0xcc))(*(code **)(_g_phyFuns + 0xcc));
  (**(code **)(_g_phyFuns + 0x160))(*(code **)(_g_phyFuns + 0x160));
  (**(code **)(_g_phyFuns + 0x1fc))(*(code **)(_g_phyFuns + 0x1fc));
  ram_phy_i2c_init1();
  (**(code **)(_g_phyFuns + 0xd8))(DAT_000121f6,*(code **)(_g_phyFuns + 0xd8));
  rom_phy_reg_init();
  rom_set_chan_reg(0);
  _DAT_60040058 = _DAT_60040058 | 0x400000;
  _DAT_60006110 = _DAT_60006110 & 0xfffffdff;
  (**(code **)(_g_phyFuns + 4))(*(code **)(_g_phyFuns + 4));
  (**(code **)(_g_phyFuns + 0x224))(*(code **)(_g_phyFuns + 0x224));
  rom_phy_bbpll_cal(0);
                    /* WARNING: Could not recover jumptable at 0x00011ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x188))(uVar1);
  return;
}

