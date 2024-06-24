/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw.o -> rf_rw_le_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rf_rw_le_init(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined8 *in_a0;
  int in_a5;
  undefined8 unaff_fs0;
  undefined8 in_fa0;
  undefined4 unaff_fs10;
  int in_stack_0000004c;
  
  *in_a0 = unaff_fs0;
  *(undefined4 *)(in_stack_0000004c + 0xfc) = unaff_fs10;
  *(undefined8 *)(unaff_s0 + 0x30) = *(undefined8 *)(unaff_s1 + 0x80);
  *(undefined8 *)(in_a5 + 0x7c) = in_fa0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

