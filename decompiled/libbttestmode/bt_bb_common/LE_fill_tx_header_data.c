/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_bb_common.o -> LE_fill_tx_header_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void LE_fill_tx_header_data(u32 length)

{
  undefined4 unaff_retaddr;
  int in_a0;
  int in_a1;
  uint in_a2;
  undefined4 in_a3;
  undefined8 unaff_fs0;
  int in_stack_0000004c;
  
  *(undefined8 *)(in_a0 + 0x20) = unaff_fs0;
  custom3.rd.rs1.rs2(unaff_retaddr,in_a3);
  if (in_a1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00011356(in_a2 & 0x10,in_stack_0000004c + 0x1d0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

