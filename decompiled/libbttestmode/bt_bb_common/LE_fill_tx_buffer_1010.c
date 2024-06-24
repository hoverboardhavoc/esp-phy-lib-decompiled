/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_bb_common.o -> LE_fill_tx_buffer_1010
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void LE_fill_tx_buffer_1010(void)

{
  int in_a0;
  int in_a1;
  uint in_a2;
  int in_a3;
  int in_a5;
  int in_stack_0000004c;
  
  if (in_a5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_a0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_a1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00011356(in_a2 & 0x10,in_stack_0000004c + 0x1d0,*(undefined8 *)(in_a3 + 0x80));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

