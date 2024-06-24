/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_tester_con
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void rw_tester_con(u32 ulap,u32 nap,u32 bchl,u32 bchh,u32 hoppe,u32 freq,u32 n,u32 whdsb,u32 edr,
                  u32 type,u32 len,u32 et_mask,u32 *nduttx,u32 *ndutrx,u32 *ntesttx,u32 *ntestrx,
                  u32 *testrxac,u32 *testrxa,u32 nfrmmax,s8 *rssi_max,s8 *rssi_min,s8 *rssi_avg,
                  s8 *rssi_max_tester,s8 *rssi_min_tester,s8 *rssi_avg_tester,u32 txpwr)

{
  undefined4 unaff_s0;
  int unaff_s1;
  int in_a0;
  
  *(undefined4 *)(unaff_s1 + 0x50) = unaff_s0;
  if (in_a0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

