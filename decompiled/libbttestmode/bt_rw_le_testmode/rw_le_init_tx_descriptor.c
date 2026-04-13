/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_le_init_tx_descriptor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_le_init_tx_descriptor
               (int param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,int param_8)

{
  uint uVar1;
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  ushort in_stack_00000010;
  
  if (param_1 == 0) {
    uVar1 = param_3 & 0x7fff |
            (in_stack_00000008 & 1) << 0x17 | in_stack_0000000c << 0x18 |
            (in_stack_00000004 & 1) << 0x16 | (in_stack_00000000 & 0xf) << 0x10;
  }
  else {
    uVar1 = (param_7 & 1) << 0x14 | param_8 << 0x18 | (param_6 & 1) << 0x13 | (param_5 & 1) << 0x12
            | param_3 & 0x7fff | (param_4 & 3) << 0x10;
  }
  *param_2 = uVar1;
  param_2[1] = 0;
  param_2[1] = param_2[1] & 0xffff0000 | (uint)in_stack_00000010;
  return;
}

