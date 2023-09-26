/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> FUN_0001060e
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001060e(int param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int unaff_s1;
  int *in_stack_00000008;
  
  if (param_2 == 0) {
    *(undefined1 **)(param_1 + 0x24) = &stack0x00000024;
    *(undefined8 *)(in_stack_00000008 + 4) = *(undefined8 *)(unaff_s1 + 0x80);
    *(int **)(unaff_s1 + 4) = in_stack_00000008;
    iVar1 = *in_stack_00000008;
    *(undefined8 *)(param_3 + 0x50) = param_4;
    *(undefined8 *)in_stack_00000008 = param_4;
    if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

