/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tsens.o -> tsens_dac_to_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 tsens_dac_to_index(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 5) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if ((((param_1 != 7) && (uVar1 = 2, param_1 != 0xf)) && (uVar1 = 3, param_1 != 0xb)) &&
       (uVar1 = 4, param_1 != 10)) {
      uVar1 = 5;
    }
  }
  return uVar1;
}

