/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tsens.o -> get_temp_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_temp_init(int param_1,int param_2)

{
  undefined2 uVar1;
  
  ram_tsens_temp_read();
  uVar1 = _DAT_00011210;
  if ((DAT_00011208 == '\x11') || (uVar1 = _DAT_00011096, param_2 != 0)) {
    _DAT_00011214 = uVar1;
  }
  if (param_1 != 0) {
    _DAT_00011216 = _DAT_00011096;
  }
  _DAT_0001109a = _DAT_00011214;
  _DAT_00011098 = _DAT_00011216;
  _DAT_00011218 = _DAT_00011216;
  return;
}

