/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_phy_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_phy_reg_init(void)

{
  (**(code **)(_g_phyFuns + 0xb0))(*(code **)(_g_phyFuns + 0xb0));
  (**(code **)(_g_phyFuns + 0xb8))
            (*(undefined1 *)(phy_param_rom + 0x1f6),*(undefined1 *)(phy_param_rom + 0x1f5),
             *(code **)(_g_phyFuns + 0xb8));
  _DAT_6001c064 = *(undefined4 *)(phy_param_rom + 0xd4);
  _DAT_6001c114 = _DAT_6001c064;
  (**(code **)(_g_phyFuns + 0xbc))(*(code **)(_g_phyFuns + 0xbc));
  (**(code **)(_g_phyFuns + 0xc4))(*(code **)(_g_phyFuns + 0xc4));
  (**(code **)(_g_phyFuns + 0xa8))(*(code **)(_g_phyFuns + 0xa8));
  (**(code **)(_g_phyFuns + 0x158))(1,*(code **)(_g_phyFuns + 0x158));
  (**(code **)(_g_phyFuns + 0x160))(*(code **)(_g_phyFuns + 0x160));
  (**(code **)(_g_phyFuns + 0x7c))(*(code **)(_g_phyFuns + 0x7c));
  rom_phy_ant_init();
  rom_bt_filter_reg();
                    /* WARNING: Could not recover jumptable at 0x00010d5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0xc0))();
  return;
}

