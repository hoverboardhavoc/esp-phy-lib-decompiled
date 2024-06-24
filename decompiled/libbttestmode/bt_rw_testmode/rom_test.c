/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rom_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void rom_test(u32 base,u32 len,u32 repeat)

{
  undefined4 unaff_s0;
  int in_a5;
  undefined8 unaff_fs0;
  int in_stack_000000b0;
  
  *(undefined4 *)unaff_s0 = unaff_s0;
  do {
    FUN_00014af0(in_stack_000000b0);
    in_stack_000000b0 = FUN_00014a3e();
  } while (in_a5 != 0);
  *(undefined8 *)(in_stack_000000b0 + 0xc) = unaff_fs0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

