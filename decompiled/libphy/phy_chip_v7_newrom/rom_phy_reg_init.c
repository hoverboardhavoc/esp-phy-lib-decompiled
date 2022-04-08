/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
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
  (**(code **)(_g_phyFuns + 0xb8))(DAT_000121fa,DAT_000121f9,*(code **)(_g_phyFuns + 0xb8));
  _DAT_6001c064 = _DAT_000120d8;
  _DAT_6001c114 = _DAT_000120d8;
  (**(code **)(_g_phyFuns + 0xbc))(*(code **)(_g_phyFuns + 0xbc));
  (**(code **)(_g_phyFuns + 0xc4))(*(code **)(_g_phyFuns + 0xc4));
  (**(code **)(_g_phyFuns + 0xa8))(*(code **)(_g_phyFuns + 0xa8));
  (**(code **)(_g_phyFuns + 0x158))(1,*(code **)(_g_phyFuns + 0x158));
  (**(code **)(_g_phyFuns + 0x160))(*(code **)(_g_phyFuns + 0x160));
  (**(code **)(_g_phyFuns + 0x7c))(*(code **)(_g_phyFuns + 0x7c));
  rom_phy_ant_init();
  rom_bt_filter_reg();
                    /* WARNING: Could not recover jumptable at 0x000116f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0xc0))();
  return;
}

