/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_i2c.o -> phy_get_i2c_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_i2c_data(void)

{
  DAT_000110c1 = 0x1b;
  _DAT_000110c2 = 0x877;
  DAT_000110c4 = 100;
  if (chip_eco_ver != '\x05') {
    DAT_000110c4 = 0xa4;
  }
  DAT_000110c5 = 10;
  _DAT_000110c6 = 0x5f08;
  _DAT_000110c8 = 0x7f05740a;
  _DAT_000110cc = 0x3f02f000;
  _DAT_000110d0 = 0x4191f3a8;
  DAT_000110d4 = 0x26;
  return;
}

