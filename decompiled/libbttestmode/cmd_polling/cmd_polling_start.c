/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> cmd_polling.o -> cmd_polling_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00010030) */
/* WARNING: Removing unreachable block (ram,0x00010036) */
/* WARNING: Removing unreachable block (ram,0x0000ff7c) */

void cmd_polling_start(int param_1,int param_2)

{
  undefined8 unaff_fs0;
  undefined4 in_ft9;
  int in_stack_0000004c;
  
  custom0();
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x20) = unaff_fs0;
    *(undefined4 *)(in_stack_0000004c + 0xfc) = in_ft9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

