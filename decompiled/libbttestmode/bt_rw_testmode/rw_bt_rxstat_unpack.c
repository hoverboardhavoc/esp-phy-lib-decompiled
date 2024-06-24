/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_bt_rxstat_unpack
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void rw_bt_rxstat_unpack(u32 desc_addr,u32 *rxlinklbl,u32 *rxeirstat,u32 *rxguarderr,u32 *rxbadlt,
                        u32 *rxfecerr,u32 *rxseqerr,u32 *rxmicerr,u32 *rxcrcerr,u32 *rxhecerr,
                        u32 *rxsyncerr)

{
  undefined4 unaff_s0;
  int in_a1;
  int in_stack_0000004c;
  
  *(undefined4 *)unaff_s0 = unaff_s0;
  if (in_a1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_stack_0000004c == -8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

