/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> ram_phy_get_noisefloor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

sint16 ram_phy_get_noisefloor(void)

{
  undefined4 unaff_retaddr;
  undefined4 in_t0;
  undefined8 *unaff_s0;
  undefined8 *in_a0;
  undefined4 in_a4;
  undefined8 unaff_fs0;
  undefined4 in_stack_0000004c;
  
  *in_a0 = unaff_fs0;
  custom3.rd.rs1.rs2(in_t0,in_stack_0000004c);
  custom3.rd.rs1.rs2(unaff_retaddr,in_a4);
  *unaff_s0 = unaff_fs0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

