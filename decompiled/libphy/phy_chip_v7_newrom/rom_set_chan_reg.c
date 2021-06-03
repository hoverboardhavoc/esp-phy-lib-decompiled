/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_set_chan_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_set_chan_reg(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(phy_param_rom + 0x1f2);
  (**(code **)(_g_phyFuns + 0x78))
            ((int)*(char *)(phy_param_rom + 500),*(code **)(_g_phyFuns + 0x78));
  (**(code **)(_g_phyFuns + 0x60))
            ((int)*(char *)(phy_param_rom + 0x1f2),(int)*(char *)(phy_param_rom + 500),0,
             *(undefined1 *)(phy_param_rom + 0xf3),*(undefined2 *)(phy_param_rom + 0x11c),
             *(undefined2 *)(phy_param_rom + 0x118),*(undefined1 *)(phy_param_rom + 0x11a),
             *(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0xd0))
            (uVar1,phy_param_rom + 0xb6,phy_param_rom + 0xb9,*(undefined1 *)(phy_param_rom + 0xbc),
             *(code **)(_g_phyFuns + 0xd0));
  (**(code **)(_g_phyFuns + 0x8c))
            ((int)*(short *)(phy_param_rom + 0x164),*(code **)(_g_phyFuns + 0x8c));
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x114))(phy_param_rom + 0x158,*(undefined1 *)(phy_param_rom + 0x1f2));
    return;
  }
  return;
}

