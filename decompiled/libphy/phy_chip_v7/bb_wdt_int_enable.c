/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> bb_wdt_int_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void bb_wdt_int_enable(bool enable)

{
  undefined4 unaff_retaddr;
  undefined3 unaff_00002009;
  int unaff_s1;
  int in_a0;
  undefined8 in_fa3;
  
  custom3.rd.rs1.rs2(unaff_retaddr,*(undefined4 *)(CONCAT31(unaff_00002009,enable) + 0x4c));
  *(undefined8 *)(in_a0 + 0xd8) = in_fa3;
  if (unaff_s1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

