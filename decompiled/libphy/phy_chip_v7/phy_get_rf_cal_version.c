/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> phy_get_rf_cal_version
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

uint32 phy_get_rf_cal_version(void)

{
  int unaff_s0;
  undefined4 in_ft11;
  int in_stack_0000004c;
  
  *(undefined4 *)(in_stack_0000004c + 0xfc) = in_ft11;
  if (unaff_s0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)unaff_s0 = unaff_s0;
  custom0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

