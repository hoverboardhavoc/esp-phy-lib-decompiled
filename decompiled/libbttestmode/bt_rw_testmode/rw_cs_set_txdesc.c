/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_cs_set_txdesc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void rw_cs_set_txdesc(u32 addr,u32 desc)

{
  undefined4 unaff_s0;
  int unaff_s1;
  int in_a1;
  int in_a5;
  undefined8 unaff_fs1;
  undefined4 unaff_fs8;
  int in_stack_0000004c;
  
  *(undefined4 *)unaff_s0 = unaff_s0;
  if (in_a1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(in_stack_0000004c + 0x48) = in_stack_0000004c + 8;
  *(undefined8 *)(in_a5 + 0x38) = unaff_fs1;
  if (unaff_s1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00011cc4(in_stack_0000004c + 0x98,*(undefined8 *)(in_stack_0000004c + 0x28),
               *(undefined8 *)(in_stack_0000004c + 0x48));
  *(undefined4 *)(in_stack_0000004c + -0xc4) = unaff_fs8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

