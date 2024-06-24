/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_bt_func_test_dut
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

u32 rw_bt_func_test_dut(u32 ulap,u32 nap,u32 freq,u32 n,u32 *nslvtx,u32 *nslvrx,u32 *ntx,u32 *nrx,
                       u32 *nrxac,u32 *nrxall,s8 *con_rssi_max,s8 *con_rssi_min,s8 *con_rssi_avg,
                       s8 *tester_rssi_max,s8 *tester_rssi_min,s8 *tester_rssi_avg)

{
  int in_a2;
  undefined8 in_ft1;
  int in_stack_0000004c;
  u32 mbchh;
  u32 mbchl;
  u32 bchh;
  u32 bchl;
  s8 try_rssi;
  
  freq = 0xfffe0000;
  if (in_a2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  freq = 0x1662c3d2;
  *(undefined8 *)(in_stack_0000004c + 0xb8) = in_ft1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

