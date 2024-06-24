/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_rx_per_ulap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Unknown calling convention */

void rw_rx_per_ulap(u32 edr,u32 chan,u32 ulap,u32 ltaddr)

{
  u32 get_err_bits;
  u32 get_total_bits;
  u32 bchh;
  u32 bchl;
  u32 gain;
  u32 pwr_full_band;
  u32 pwr_in_band;
  
                    /* WARNING: Could not recover jumptable at 0x00017cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&stack0x00000000)();
  return;
}

