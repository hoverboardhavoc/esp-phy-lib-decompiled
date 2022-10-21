/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_reg.o -> ram_set_pbus_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_set_pbus_reg(void)

{
  _DAT_600060e0 = 0x5040300;
  _DAT_600060e4 = 0xf0e0d06;
  _DAT_600060e8 = 0x14131210;
  _DAT_600060ec = 0x1a191815;
  _DAT_600060f0 = 0x2423221b;
  _DAT_600060f4 = 0x29282725;
  return;
}

