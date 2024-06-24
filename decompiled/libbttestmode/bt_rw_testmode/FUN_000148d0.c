/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> FUN_000148d0
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000148d0(undefined4 param_1)

{
  undefined4 in_t1;
  undefined4 unaff_s3;
  undefined4 unaff_s6;
  undefined4 unaff_s8;
  
  custom3.rs1.rs2(unaff_s8,unaff_s6);
  custom3.rs1.rs2(in_t1,unaff_s3);
  custom3.rs1.rs2(0,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

