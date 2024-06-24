/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_page_cmd
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void rw_page_cmd(u32 debug_freq,u32 tx_freq,u32 rx_freq)

{
  undefined8 *in_a0;
  int in_a3;
  int in_a5;
  undefined4 unaff_fs0;
  undefined4 unaff_00003044;
  undefined8 in_fa5;
  u32 bchh;
  u32 bchl;
  
  *in_a0 = CONCAT44(unaff_00003044,unaff_fs0);
  *(undefined8 *)(in_a5 + 0x78) = in_fa5;
  rx_freq = rx_freq + 0x17;
  if (in_a3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

