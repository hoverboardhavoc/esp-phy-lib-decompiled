/*
 * Last changed at upstream commit 2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * https://github.com/espressif/esp-phy-lib/commit/2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * Upstream date: 2021-12-07 14:34:50 +0800
 * Upstream subject: Update esp32c3 and esp32s3 phy lib and bb lib Fix the ble task watchdog timeout issue caused by phy enable when exit modem sleep.
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_fe_i2c_reg_renew
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_fe_i2c_reg_renew(void)

{
  _DAT_6000e058 = _DAT_6000e058 & 0xffffff00 | 0x20;
  _DAT_6000e060 = _DAT_6000e060 & 0xffff00ff | 0x1000;
  _DAT_60006000 = _DAT_60006000 | 0xc000000;
  _DAT_6000e048 = _DAT_6000e048 & 0xfffe000f | 0x1fe00;
  (**(code **)(_g_phyFuns + 0x1b4))(0x66,0,4,phy_bbpll_i2c,*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x000117d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1b4))(0x66,0,5,DAT_00012015);
  return;
}

