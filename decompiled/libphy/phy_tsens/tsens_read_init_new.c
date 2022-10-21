/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tsens.o -> tsens_read_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tsens_read_init_new(int param_1,int param_2)

{
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 0x1bc))
              (0x69,0,6,3,0,phy_tsens_attribute[param_2 * 6 + 1],*(code **)(_g_phyFuns + 0x1bc));
  }
  _DAT_600c0014 = _DAT_600c0014 | 0x400;
  _DAT_600c001c = _DAT_600c001c & 0xfffffbff;
  _DAT_6004005c = _DAT_6004005c | 0x8000;
  _DAT_60040058 = _DAT_60040058 | 0x400000;
  return;
}

