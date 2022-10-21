/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libbtbb -> bt_bb_v2.o -> set_gauss_coeff_1m
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_gauss_coeff_1m(void)

{
  _DAT_600460e0 = _DAT_600460e0 & 3 | 0xc;
  _DAT_600460e4 = _DAT_600460e4 & 3 | 0x10192aa8;
  _DAT_600460e8 = _DAT_600460e8 & 0x3ff | 0xaa9cd400;
  _DAT_600460ec = _DAT_600460ec & 0x3ff | 0xfbdfec00;
  return;
}

