/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> txcal_gain_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txcal_gain_check(void)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  sVar1 = *(short *)((DAT_00010ddb + 0x20) * 2 + 0x10d3c);
  puVar2 = &phy_param;
  do {
    puVar3 = (undefined4 *)((int)puVar2 + 2);
    *(short *)(puVar2 + 0x11) = *(short *)(puVar2 + 0x11) - sVar1;
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)0x10d5c);
  sVar1 = *(short *)((DAT_00010ddc + 0x38) * 2 + 0x10d3e);
  puVar2 = &phy_param;
  do {
    puVar3 = (undefined4 *)((int)puVar2 + 2);
    *(short *)((int)puVar2 + 0x76) = *(short *)((int)puVar2 + 0x76) - sVar1;
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)0x10d54);
  return;
}

