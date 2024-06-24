/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_bb_common.o -> BT_start_tx_packet_8m
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void BT_start_tx_packet_8m(uint16 tx_freq_offset_500k,uint32 data_rate,uint32 delay)

{
  undefined2 unaff_0000200a;
  int in_a5;
  undefined8 in_fa6;
  
  if (in_a5 == 0) {
    *(undefined8 *)(*(int *)(CONCAT22(unaff_0000200a,tx_freq_offset_500k) + 0x4c) + 0x90) = in_fa6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

