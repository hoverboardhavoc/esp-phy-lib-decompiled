/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_mac_loopback_df
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

int BT_mac_loopback_df(u32 device_sel)

{
  u32 tx_length;
  int unaff_s0;
  int unaff_s1;
  int in_a5;
  undefined8 in_fa2;
  
  if (in_a5 == 0) {
    uRam0000007c = in_fa2;
    *(undefined8 *)(unaff_s0 + 0x10) = *(undefined8 *)(unaff_s1 + 0x80);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

