/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_reg.o -> rom_phy_ant_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_phy_ant_init(void)

{
  _DAT_6001c11c = _DAT_6001c11c & 0xffffe800;
  _DAT_6001c030 = _DAT_6001c030 & 0xfffc07ff | 0x1a000;
  _DAT_6001c120 = _DAT_6001c120 & 0xff00ff | 0x1e001e00;
  return;
}

