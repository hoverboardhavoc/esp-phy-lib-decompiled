/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_ana.o -> ram_pbus_force_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void ram_pbus_force_mode(bool pbus_force_en)

{
  undefined3 unaff_00002009;
  int iVar1;
  int in_a3;
  undefined4 in_ft5;
  undefined4 unaff_fs10;
  
  iVar1 = *(int *)(CONCAT31(unaff_00002009,pbus_force_en) + 0x4c);
  *(undefined4 *)(iVar1 + 0x24) = in_ft5;
  *(undefined4 *)(*(int *)iVar1 + 0xfc) = unaff_fs10;
  if (in_a3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

