/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt.o -> BT_hoppe
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BT_hoppe(void)

{
  int unaff_s0;
  undefined8 *in_a0;
  int in_a5;
  undefined8 unaff_fs0;
  undefined8 in_fa1;
  undefined4 in_ft10;
  int in_stack_0000004c;
  
  *in_a0 = unaff_fs0;
  *(undefined4 *)(in_stack_0000004c + 0xfc) = in_ft10;
  *(undefined8 *)(unaff_s0 + 0x2c) = in_fa1;
  if (in_a5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  tp = 0x19000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

