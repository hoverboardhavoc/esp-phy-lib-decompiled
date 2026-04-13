/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_init_tx_descriptor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_init_tx_descriptor
               (uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,uint param_8)

{
  uint in_stack_00000000;
  uint in_stack_00000004;
  int in_stack_00000008;
  ushort in_stack_0000000c;
  
  *param_1 = (param_4 & 1) << 0x18 | (param_3 & 1) << 0x19 | (param_5 & 1) << 0x17 |
             (param_6 & 0xf) << 0x13 | param_2 & 0x7fff | (param_7 & 7) << 0x10;
  param_1[1] = (param_8 & 0x3ff) << 3 | in_stack_00000008 << 0x10 | in_stack_00000004 & 3 |
               (in_stack_00000000 & 1) << 2;
  param_1[2] = param_1[2] & 0xffff0000 | (uint)in_stack_0000000c;
  return;
}

