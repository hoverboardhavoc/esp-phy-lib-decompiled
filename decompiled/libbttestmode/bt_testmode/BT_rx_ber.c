/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_rx_ber
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Unknown calling convention */

void BT_rx_ber(u32 bits,u32 link_type,u32 chan,u32 time_out,u32 be_thresh)

{
  u32 get_err_bits;
  u32 get_total_bits;
  
                    /* WARNING: Could not recover jumptable at 0x000148a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&stack0x00000000)();
  return;
}

