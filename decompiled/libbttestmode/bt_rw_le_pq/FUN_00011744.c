/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_le_pq.o -> FUN_00011744
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00011744(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 unaff_fs11;
  int in_stack_00000018;
  
  iVar1 = tp;
  tp = tp + 0xe;
  if (param_2 == 0) {
    *(int *)(in_stack_00000018 + 0x40) = in_stack_00000018;
    tp = iVar1 + 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xbc) = unaff_fs11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

