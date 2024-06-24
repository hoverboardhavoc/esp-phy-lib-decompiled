/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> set_eir_LLID
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void set_eir_LLID(u32 LLID)

{
  undefined4 *unaff_s0;
  undefined8 *in_a0;
  undefined4 in_a3;
  int in_a5;
  undefined8 unaff_fs0;
  
  do {
    *in_a0 = unaff_fs0;
  } while (in_a5 != 0);
  *unaff_s0 = in_a3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

