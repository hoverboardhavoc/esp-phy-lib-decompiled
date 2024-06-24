/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_init_rx_descryptor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void rw_init_rx_descryptor(u32 desc_addr,u32 nxt_desc_addr,u32 aclbuf_addr,u32 lmpbuf_addr)

{
  undefined4 in_a0;
  int in_stack_0000004c;
  
  *(undefined4 *)(in_stack_0000004c + 0x210) = in_a0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

