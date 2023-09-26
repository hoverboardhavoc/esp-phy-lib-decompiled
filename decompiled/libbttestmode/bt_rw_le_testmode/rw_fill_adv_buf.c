/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_fill_adv_buf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered unimplemented instructions */

void rw_fill_adv_buf(int *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  undefined4 in_ft11;
  int in_stack_0000004c;
  
  *param_1 = unaff_s0;
  *(undefined4 *)(in_stack_0000004c + 0xfc) = in_ft11;
  *(int *)(param_2 + 0x10) = in_stack_0000004c + 0x10;
  *(undefined8 *)(unaff_s1 + 0x70) = param_4;
  custom0.rs1(param_3);
  iVar1 = *(int *)(in_stack_0000004c + 0x4c);
  *param_1 = in_stack_0000004c + 0x24;
  *(undefined4 *)(iVar1 + 0xfc) = in_ft11;
  *(int *)(param_2 + 0x10) = param_1[0xc];
  *(undefined8 *)(unaff_s1 + 0x70) = param_4;
  custom0.rs1(param_3);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

