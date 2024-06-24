/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_rx_per_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void rw_rx_per_init(u32 edr,u32 chan)

{
  int in_a0;
  undefined4 in_a2;
  int in_a5;
  undefined4 unaff_s8;
  undefined4 unaff_s10;
  u32 bchh;
  u32 bchl;
  
  if (in_a5 != 0) {
    custom3.rs1.rs2(unaff_s8,in_a2);
    custom3.rs1.rs2(0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_a0 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  custom3.rs1.rs2(in_a2,unaff_s10);
  custom3.rs1.rs2(0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

