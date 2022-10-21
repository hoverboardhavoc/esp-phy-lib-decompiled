/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_feature.o -> get_max_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_max_power(void)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  
  puVar3 = &phy_param;
  cVar2 = DAT_00011100;
  do {
    cVar1 = puVar3[0xf5];
    if ((char)puVar3[0xf5] < cVar2) {
      cVar1 = cVar2;
    }
    cVar2 = cVar1;
    puVar3 = puVar3 + 1;
  } while (puVar3 != (undefined *)0x11019);
  return;
}

