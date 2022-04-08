/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_fe_i2c_reg_renew
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_fe_i2c_reg_renew(void)

{
  _DAT_6000e058 = _DAT_6000e058 & 0xffffff00 | 0x40;
  _DAT_6000e060 = _DAT_6000e060 & 0xffff00ff | 0x3800;
  _DAT_60006000 = _DAT_60006000 | 0xc000000;
  _DAT_6000e048 = _DAT_6000e048 & 0xfffe000f | 0x1fe00;
  (**(code **)(_g_phyFuns + 0x1b4))(0x66,0,4,phy_bbpll_i2c,*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x00011972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1b4))(0x66,0,5,DAT_00012021);
  return;
}

