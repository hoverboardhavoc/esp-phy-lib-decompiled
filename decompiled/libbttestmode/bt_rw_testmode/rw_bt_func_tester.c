/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_bt_func_tester
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rw_bt_func_tester(void)

{
  u32 ntestrxac;
  u32 ntestrxa;
  u32 ntestrx;
  u32 ntesttx;
  u32 ndutrx;
  u32 nduttx;
  u32 mbchh;
  u32 mbchl;
  u32 bchh;
  u32 bchl;
  s8 tester_rssi_avg;
  s8 tester_rssi_min;
  s8 tester_rssi_max;
  s8 con_rssi_avg;
  s8 con_rssi_min;
  s8 con_rssi_max;
  s8 try_rssi;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

