/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_mac_tx_packet
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered unimplemented instructions */

void BT_mac_tx_packet(packet_struct packet,u32 data_type)

{
  int in_a3;
  
  *(undefined4 *)(in_a3 + 0x98) = gp;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

