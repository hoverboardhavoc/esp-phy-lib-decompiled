/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> cmd_polling_test2
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void cmd_polling_test2(polling_sample *b)

{
  uint in_t1;
  int unaff_s0;
  int unaff_s1;
  int in_a5;
  uint in_t3;
  undefined8 in_ft0;
  undefined8 in_ft4;
  undefined8 in_fa5;
  int in_stack_0000004c;
  
  *(int *)(unaff_s0 + 0x10) = unaff_s0;
  *(undefined8 *)(in_stack_0000004c + 0x30) = in_ft4;
  *(undefined8 *)(in_stack_0000004c + 0x80) = in_ft0;
  *(undefined8 *)(in_a5 + 0x7c) = in_fa5;
  if (unaff_s1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_t1 <= in_t3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

