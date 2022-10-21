/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> write_txrate_power_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void write_txrate_power_offset(bool chg_offset)

{
  undefined3 unaff_00002009;
  undefined8 unaff_fs5;
  
  *(undefined8 *)(*(int *)(CONCAT31(unaff_00002009,chg_offset) + 0x4c) + 0x120) = unaff_fs5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

