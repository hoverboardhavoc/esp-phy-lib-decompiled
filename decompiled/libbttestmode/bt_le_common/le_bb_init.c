/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_le_common.o -> le_bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void le_bb_init(void)

{
  int unaff_s1;
  int in_a1;
  undefined8 *in_a2;
  int in_a5;
  undefined4 unaff_s8;
  undefined8 unaff_fs0;
  int in_stack_0000004c;
  
  *in_a2 = unaff_fs0;
  if (in_a1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_a5 != 0) {
    if (in_a2 == (undefined8 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_stack_0000004c == -0x14c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  custom2.rs1(unaff_s8);
  if (in_a2 != (undefined8 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(in_stack_0000004c + 0x38) = *(undefined8 *)(unaff_s1 + 0x80);
  tp = tp + in_stack_0000004c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

