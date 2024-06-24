/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> fcc_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void fcc_tx(u32 txpwr,u32 hoppe,u32 chan,u32 rate,u32 DH_type,u32 data_type,u32 tx_num_in)

{
  int unaff_s1;
  
  *(undefined1 **)(unaff_s1 + 0x54) = &stack0x00000240;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

