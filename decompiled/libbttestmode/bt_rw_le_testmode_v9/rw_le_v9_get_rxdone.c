/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_get_rxdone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void rw_le_v9_get_rxdone(void)

{
  undefined4 unaff_s0;
  int in_stack_0000004c;
  
  *(undefined4 *)unaff_s0 = unaff_s0;
  if (in_stack_0000004c == -0x140) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(in_stack_0000004c + 0x48) = in_stack_0000004c + 8;
  tp = tp + 0xe;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

