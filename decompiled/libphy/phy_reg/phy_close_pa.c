/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_reg.o -> phy_close_pa
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_close_pa(int param_1)

{
  if (param_1 != 0) {
    _DAT_60006110 = _DAT_60006110 & 0xfffff3ff | 0x800;
    _DAT_6000610c = _DAT_6000610c & 0xffffffeb;
    return;
  }
  _DAT_6000610c = _DAT_6000610c | 0x14;
  _DAT_60006110 = _DAT_60006110 & 0xfffff3ff;
  return;
}

