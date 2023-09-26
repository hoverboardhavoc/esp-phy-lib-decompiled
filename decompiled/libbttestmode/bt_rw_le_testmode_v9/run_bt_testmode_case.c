/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> run_bt_testmode_case
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void run_bt_testmode_case(int param_1,int param_2)

{
  undefined8 unaff_fs0;
  undefined4 unaff_fs11;
  
  *(undefined8 *)(param_1 + 0x20) = unaff_fs0;
  *(undefined4 *)(param_2 + 0xbc) = unaff_fs11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

