/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> LM_fill_payload
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void LM_fill_payload(u32 len,u32 tx_buffer_addr)

{
  int unaff_s0;
  int in_a5;
  undefined8 unaff_fs0;
  
  *(undefined8 *)(unaff_s0 + 0x18) = unaff_fs0;
  do {
  } while (in_a5 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

