/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt.o -> BTAutotest
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BTAutotest(void)

{
  undefined8 *in_a2;
  undefined8 in_fa2;
  uint8 rf_cal_data [2048];
  u32 power_average;
  u32 power_min;
  
  *in_a2 = in_fa2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

