/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_bb_common.o -> BT_fill_tx_buffer
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void BT_fill_tx_buffer(uint32 data_rate,uint32 data_type)

{
  int in_a5;
  int in_stack_0000004c;
  
  if (in_a5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_0001099e(in_stack_0000004c + 0x20,*(undefined8 *)(in_a5 + 4));
  FUN_000109a6(in_stack_0000004c + 0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

