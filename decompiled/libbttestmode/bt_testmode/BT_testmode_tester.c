/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_testmode_tester
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void BT_testmode_tester(u32 ulap,u32 nap,u32 dut_lap_est)

{
  int in_a5;
  undefined8 unaff_fs0;
  u32 dut_cod;
  u32 clkn;
  u32 dut_clk27_2;
  u32 dut_lap;
  u32 dut_uap;
  u32 dut_nap;
  
  *(undefined8 *)(in_a5 + 0x3c) = unaff_fs0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

