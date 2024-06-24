/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_rx_prbs9_status
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void BT_rx_prbs9_status(u32 *total_bits,u32 *err_bits)

{
  u32 word_len;
  u32 last_mask;
  int *in_a0;
  int in_a4;
  int in_a5;
  undefined4 in_fa6;
  
  while( true ) {
    total_bits = *(BADSPACEBASE **)((int)total_bits + 0x4c);
    do {
    } while (in_a5 != 0);
    if (in_a4 == 0) break;
    if (*in_a0 != 0) {
      *(undefined4 *)((int)total_bits + 0xbc) = in_fa6;
      if ((undefined1 *)total_bits == (undefined1 *)0xfffffff8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

