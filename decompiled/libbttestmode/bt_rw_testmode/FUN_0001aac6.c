/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> FUN_0001aac6
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001aac6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 4) = param_1;
  *(undefined4 *)(unaff_s1 + 4) = param_2;
  *(undefined4 *)(unaff_s1 + 4) = param_3;
  *(undefined4 *)(unaff_s1 + 4) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

