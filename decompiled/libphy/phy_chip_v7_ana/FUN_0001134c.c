/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_ana.o -> FUN_0001134c
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void FUN_0001134c(int param_1)

{
  undefined8 unaff_fs0;
  
  *(undefined8 *)(param_1 + 0x18) = unaff_fs0;
                    /* WARNING: Could not recover jumptable at 0x00011352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&stack0x00000000)();
  return;
}

