/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_reg.o -> ram_fe_i2c_reg_renew
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
                    /* WARNING: Could not recover jumptable at 0x000104d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1b4))(0x66,0,5,DAT_00011005);
  return;
}

