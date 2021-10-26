/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
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
  (**(code **)(_g_phyFuns + 0xb8))(DAT_00012202,DAT_00012201,*(code **)(_g_phyFuns + 0xb8));
  _DAT_6001c064 = _DAT_000120e0;
  _DAT_6001c114 = _DAT_000120e0;
  (**(code **)(_g_phyFuns + 0xbc))(*(code **)(_g_phyFuns + 0xbc));
  (**(code **)(_g_phyFuns + 0xc4))(*(code **)(_g_phyFuns + 0xc4));
  (**(code **)(_g_phyFuns + 0xa8))(*(code **)(_g_phyFuns + 0xa8));
  (**(code **)(_g_phyFuns + 0x158))(1,*(code **)(_g_phyFuns + 0x158));
  (**(code **)(_g_phyFuns + 0x160))(*(code **)(_g_phyFuns + 0x160));
  (**(code **)(_g_phyFuns + 0x7c))(*(code **)(_g_phyFuns + 0x7c));
  rom_phy_ant_init();
  rom_bt_filter_reg();
                    /* WARNING: Could not recover jumptable at 0x00011630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0xc0))();
  return;
}

