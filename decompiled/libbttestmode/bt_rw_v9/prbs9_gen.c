/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_v9.o -> prbs9_gen
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void prbs9_gen(int param_1,int param_2)

{
  undefined4 in_t0;
  undefined4 unaff_s0;
  undefined4 unaff_s6;
  undefined8 uVar1;
  int in_stack_0000004c;
  
  *(undefined4 *)(param_1 + 0x20) = unaff_s0;
  *(undefined4 *)(in_stack_0000004c + 100) = unaff_s6;
  if (in_stack_0000004c == -0x248) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(in_stack_0000004c + 4) = in_t0;
  func_0x000109d6(in_stack_0000004c + 0x90,in_stack_0000004c + 8,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

