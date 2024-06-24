/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_tx_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void rw_tx_test(u32 txpwr,u32 hoppe,u32 freq,u32 edr,u32 type,u32 length,u32 et_mask,u32 data_type,
               u32 tx_num_in)

{
  undefined8 *in_a0;
  undefined1 *in_a3;
  int in_a5;
  undefined4 in_a6;
  undefined8 unaff_fs0;
  u32 bchh;
  u32 bchl;
  
  *in_a0 = unaff_fs0;
  if (in_a5 == 0) {
    if (&stack0x00000000 == (undefined1 *)0xfffffc70) {
      if (in_a3 == (undefined1 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      custom3.rs1.rs2(0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    in_a3 = &stack0x00000144;
  }
  custom3.rs1.rs2(in_a6,in_a3);
  custom3.rs1.rs2(0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

