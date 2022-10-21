/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> phy_bttx_low_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000132ee) */
/* WARNING: Unknown calling convention */

void phy_bttx_low_power(bool force_en,uint8 level)

{
  undefined3 unaff_00002009;
  int iVar1;
  int in_a2;
  undefined8 in_fa3;
  undefined8 unaff_fs2;
  
  iVar1 = *(int *)(CONCAT31(unaff_00002009,force_en) + 0x4c);
  *(undefined8 *)(in_a2 + 0x6c) = in_fa3;
  *(undefined8 *)(iVar1 + 0x1b0) = unaff_fs2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

