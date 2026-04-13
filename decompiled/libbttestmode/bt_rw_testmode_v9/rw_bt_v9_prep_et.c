/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_prep_et
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_bt_v9_prep_et(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
                     ,uint param_7,uint param_8)

{
  uint in_stack_00000000;
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint in_stack_00000024;
  
  *param_1 = (param_2 & 0x1f) << 0xb | *param_1 & 0xffff07ff;
  *param_1 = (param_3 & 1) << 10 | *param_1 & 0xfffffbff;
  *param_1 = (param_4 & 1) << 9 | *param_1 & 0xfffffdff;
  *param_1 = (param_5 & 1) << 8 | *param_1 & 0xfffffeff;
  *param_1 = (param_6 & 1) << 7 | *param_1 & 0xffffff7f;
  *param_1 = (param_7 & 1) << 6 | *param_1 & 0xffffffbf;
  *param_1 = (param_8 & 7) << 3 | *param_1 & 0xffffffc7;
  *param_1 = *param_1 & 0xfffffff8 | in_stack_00000000 & 7;
  *param_1 = *param_1 & 0xffff | in_stack_00000004 << 0x10;
  param_1[1] = (uint)(in_stack_00000004 << 4) >> 0x14 | param_1[1] & 0xfffff000;
  param_1[1] = (in_stack_00000008 & 0x3ff) << 0x10 | param_1[1] & 0xfc00ffff;
  param_1[2] = param_1[2] & 0xffff8000 | in_stack_0000000c & 0x7fff;
  param_1[2] = param_1[2] & 0x7fffffff | in_stack_00000010 << 0x1f;
  param_1[2] = (in_stack_00000014 & 0x7fff) << 0x10 | param_1[2] & 0x8000ffff;
  param_1[3] = (in_stack_00000018 & 0x1f) << 8 | param_1[3] & 0xffffe0ff;
  param_1[3] = param_1[3] & 0xffffffe0 | in_stack_0000001c & 0x1f;
  param_1[3] = (in_stack_00000020 & 0x1f) << 0x18 | param_1[3] & 0xe0ffffff;
  param_1[3] = (in_stack_00000024 & 3) << 0x10 | param_1[3] & 0xfffcffff;
  return;
}

