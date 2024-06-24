/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> bt_bb_dump
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void bt_bb_dump(u32 data_sel,u32 dump_len)

{
  int iVar1;
  int unaff_s1;
  int in_a0;
  int in_a5;
  undefined8 in_ft1;
  undefined8 unaff_fs0;
  undefined8 in_fa2;
  undefined4 in_ft9;
  int in_stack_0000004c;
  
  *(undefined8 *)(in_a0 + 0x20) = unaff_fs0;
  *(undefined8 *)(in_a5 + 0x7c) = in_fa2;
  if (unaff_s1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = *(int *)(in_stack_0000004c + 0xa0);
  if (in_a5 == 0) {
    *(int *)(*(int *)(in_a0 + 0x2e) + 0x40) = *(int *)(in_a0 + 0x2e);
    *(undefined8 *)(iVar1 + 0x80) = in_ft1;
    *(undefined4 *)(iVar1 + 0xbc) = in_ft9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

