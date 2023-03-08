/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> interrupt.o -> interrupt_set_wrapper
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void interrupt_set_wrapper(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((param_1 + 0x18030800) * 4) = param_2;
  esprv_intc_int_set_priority(param_2,param_3);
  esprv_intc_int_set_type(param_2,0);
  return;
}

