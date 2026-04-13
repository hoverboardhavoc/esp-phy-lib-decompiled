/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> interrupt.o -> interrupt_set_wrapper
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void interrupt_set_wrapper(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((param_1 + 0x18031400) * 4) = param_2;
  esprv_intc_int_set_priority(param_2,param_3);
  esprv_intc_int_set_type(param_2,0);
  return;
}

