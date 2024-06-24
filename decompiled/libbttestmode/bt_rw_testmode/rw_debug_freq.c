/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_debug_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void rw_debug_freq(u32 tx_freq,u32 rx_freq)

{
  int in_a0;
  undefined4 unaff_s9;
  undefined8 unaff_fs0;
  
  *(undefined8 *)(in_a0 + 0x20) = unaff_fs0;
  custom3.rd.rs1.rs2(rx_freq,unaff_s9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

