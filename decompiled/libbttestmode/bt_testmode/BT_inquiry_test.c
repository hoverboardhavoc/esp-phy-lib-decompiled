/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_inquiry_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void BT_inquiry_test(u32 hoppe_en,u32 chan)

{
  undefined4 uVar1;
  undefined4 *in_a0;
  int in_a5;
  undefined8 unaff_fs4;
  int in_stack_0000004c;
  
  uVar1 = *in_a0;
  if (in_a5 == 0) {
    *(undefined8 *)(in_stack_0000004c + 0x198) = unaff_fs4;
    *(undefined4 *)uVar1 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

