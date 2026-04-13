/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_rxstat_unpack_adv
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_le_v9_rxstat_unpack_adv
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
               uint *param_7,uint *param_8)

{
  uint uVar1;
  uint *in_stack_00000000;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  
  uVar1 = *param_1;
  *in_stack_00000008 = param_1[1] >> 0x10 & 0xff;
  *param_2 = param_1[3] >> 0xb & 0x1f;
  *param_3 = uVar1 >> 0x14 & 1;
  *param_4 = uVar1 >> 0x11 & 0x10;
  *param_6 = uVar1 >> 0x17 & 1;
  *param_5 = uVar1 >> 0x16 & 1;
  *param_7 = uVar1 >> 0x13 & 1;
  *param_8 = uVar1 >> 0x12 & 1;
  *in_stack_00000000 = uVar1 >> 0x15 & 1;
  *in_stack_00000004 = uVar1 >> 0x10 & 1;
  return;
}

