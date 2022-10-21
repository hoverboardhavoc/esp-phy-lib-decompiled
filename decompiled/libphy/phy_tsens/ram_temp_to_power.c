/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tsens.o -> ram_temp_to_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int ram_temp_to_power(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (param_1 - param_2) * 0x10000;
  iVar3 = iVar2 >> 0x10;
  if (param_3 == 0) {
    iVar2 = 6;
    if (iVar3 < 1) {
      iVar2 = 4;
    }
  }
  else {
    if (0 < iVar3) {
      cVar1 = (char)(iVar2 >> 0x12);
      goto _L6;
    }
    iVar2 = 5;
  }
  cVar1 = (char)(iVar3 / iVar2);
_L6:
  return (int)cVar1;
}

