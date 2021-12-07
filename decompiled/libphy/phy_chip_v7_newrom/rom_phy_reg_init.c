/*
 * Last changed at upstream commit 2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * https://github.com/espressif/esp-phy-lib/commit/2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * Upstream date: 2021-12-07 14:34:50 +0800
 * Upstream subject: Update esp32c3 and esp32s3 phy lib and bb lib Fix the ble task watchdog timeout issue caused by phy enable when exit modem sleep.
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
                    /* WARNING: Could not recover jumptable at 0x00011642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0xc0))();
  return;
}

