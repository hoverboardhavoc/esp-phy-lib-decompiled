/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_i2c.o -> i2c_bbpll_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_bbpll_set(void)

{
  (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,9,3,2,3,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,9,5,4,2,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,10,1,0,1,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,4,3,2,3,*(code **)(_g_phyFuns + 0x1bc));
  DAT_000110d5 = (**(code **)(_g_phyFuns + 0x1ac))(0x66,0,9,*(code **)(_g_phyFuns + 0x1ac));
  DAT_000110d6 = (**(code **)(_g_phyFuns + 0x1ac))(0x66,0,10,*(code **)(_g_phyFuns + 0x1ac));
  phy_bbpll_i2c = (**(code **)(_g_phyFuns + 0x1ac))(0x66,0,4,*(code **)(_g_phyFuns + 0x1ac));
  if (bbpll_en_usb == '\0') {
    (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,5,7,7,0,*(code **)(_g_phyFuns + 0x1bc));
  }
  DAT_00010949 = (**(code **)(_g_phyFuns + 0x1ac))(0x66,0,5,*(code **)(_g_phyFuns + 0x1ac));
  return;
}

