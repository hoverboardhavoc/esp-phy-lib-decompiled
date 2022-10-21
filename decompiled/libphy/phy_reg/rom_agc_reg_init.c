/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_reg.o -> rom_agc_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_agc_reg_init(uint param_1,int param_2)

{
  _DAT_6001c13c = (param_1 - 3) * 0x40000 & 0x1fc0000 | _DAT_6001c13c & 0xfe03ffff;
  _DAT_6001c094 = (param_1 - 3) * 4 & 0x1fc | _DAT_6001c094 & 0xfffffe03;
  _DAT_6001c0a4 = param_2 << 0xf | 0x2346;
  _DAT_6001c02c = (param_1 & 0xcd007f) << 8 | _DAT_6001c02c & 0x7f80ff | 0x32000000;
  _DAT_6001c05c = _DAT_6001c05c & 0xfff80000 | 3000;
  _DAT_6001c134 = _DAT_6001c134 & 0xfffff00f | 0xa60;
  return;
}

