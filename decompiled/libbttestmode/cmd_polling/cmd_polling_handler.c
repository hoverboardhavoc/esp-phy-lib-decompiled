/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> cmd_polling.o -> cmd_polling_handler
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void cmd_polling_handler(int param_1,int param_2,undefined8 param_3)

{
  undefined4 unaff_s0;
  undefined8 uVar1;
  int in_stack_0000004c;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x7c) = param_3;
  *(undefined8 *)(in_stack_0000004c + 8) = uVar1;
  *(undefined4 *)unaff_s0 = unaff_s0;
  *(int *)(in_stack_0000004c + 0x48) = in_stack_0000004c + 8;
  if (in_stack_0000004c == -8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

