/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_bb_common.o -> BT_tx_packet
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void BT_tx_packet(uint16 freq_odd,uint16 freq_even,uint16 tx_freq_offset_500k,uint32 slot_time,
                 uint32 delay,uint32 data_rate,uint32 data_type,uint32 tx_slot,uint32 tx_off_delay)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

