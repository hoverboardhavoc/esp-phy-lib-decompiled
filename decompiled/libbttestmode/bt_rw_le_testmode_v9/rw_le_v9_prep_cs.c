/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_prep_cs
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_le_v9_prep_cs(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
                     ,uint param_7,uint param_8)

{
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_00000024;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  uint in_stack_00000034;
  uint in_stack_00000038;
  int in_stack_0000003c;
  byte in_stack_00000040;
  uint in_stack_00000044;
  uint in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000054;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  uint in_stack_00000060;
  int in_stack_00000064;
  uint in_stack_00000068;
  int in_stack_0000006c;
  uint in_stack_00000070;
  uint in_stack_00000074;
  int in_stack_00000078;
  byte in_stack_0000007c;
  uint in_stack_00000080;
  uint in_stack_00000084;
  uint in_stack_00000088;
  
  *param_1 = *param_1 & 0xffffffe0 | param_2 & 0x1f;
  *param_1 = (param_3 & 1) << 8 | *param_1 & 0xfffffeff;
  *param_1 = (param_4 & 1) << 9 | *param_1 & 0xfffffdff;
  *param_1 = (param_5 & 1) << 10 | *param_1 & 0xfffffbff;
  *param_1 = (param_6 & 0x1f) << 0x10 | *param_1 & 0xffe0ffff;
  *param_1 = (param_7 & 1) << 0x17 | *param_1 & 0xff7fffff;
  *param_1 = (param_8 & 1) << 0x18 | *param_1 & 0xfeffffff;
  *param_1 = (in_stack_00000000 & 1) << 0x19 | *param_1 & 0xfdffffff;
  *param_1 = (in_stack_00000004 & 1) << 0x1a | *param_1 & 0xfbffffff;
  *param_1 = (in_stack_00000008 & 1) << 0x1b | *param_1 & 0xf7ffffff;
  param_1[1] = param_1[1] & 0xfffffffc | in_stack_0000000c & 3;
  param_1[1] = (in_stack_00000010 & 3) << 2 | param_1[1] & 0xfffffff3;
  param_1[1] = (in_stack_00000014 & 3) << 4 | param_1[1] & 0xffffffcf;
  param_1[1] = (in_stack_00000018 & 0xf) << 8 | param_1[1] & 0xfffff0ff;
  param_1[1] = (in_stack_0000001c & 0xf) << 0xc | param_1[1] & 0xffff0fff;
  param_1[1] = param_1[1] & 0xffff | in_stack_00000020 << 0x10;
  param_1[2] = param_1[2] & 0xffff0000 | in_stack_00000020 >> 0x10;
  param_1[2] = param_1[2] & 0xffff | in_stack_00000024 << 0x10;
  param_1[3] = in_stack_00000028;
  param_1[4] = param_1[4] & 0xff000000 | in_stack_0000002c & 0xffffff;
  param_1[5] = (in_stack_00000030 & 0x3f) << 0x10 | param_1[5] & 0xffc0ffff;
  param_1[5] = (in_stack_00000034 & 0x1f) << 0x18 | param_1[5] & 0xe0ffffff;
  param_1[5] = (in_stack_00000038 & 1) << 0x1e | param_1[5] & 0xbfffffff;
  param_1[5] = param_1[5] & 0x7fffffff | in_stack_0000003c << 0x1f;
  param_1[6] = param_1[6] & 0xffffff00 | (uint)in_stack_00000040;
  param_1[6] = (in_stack_00000044 & 1) << 9 | param_1[6] & 0xfffffdff;
  param_1[6] = (in_stack_00000048 & 1) << 10 | param_1[6] & 0xfffffbff;
  param_1[6] = (in_stack_0000004c & 1) << 0xb | param_1[6] & 0xfffff7ff;
  param_1[6] = (in_stack_00000050 & 1) << 0xc | param_1[6] & 0xffffefff;
  param_1[6] = (in_stack_00000054 & 1) << 0xd | param_1[6] & 0xffffdfff;
  param_1[6] = (in_stack_00000058 & 1) << 0xe | param_1[6] & 0xffffbfff;
  param_1[6] = (in_stack_0000005c & 1) << 0xf | param_1[6] & 0xffff7fff;
  param_1[6] = (in_stack_00000060 & 0x7fff) << 0x10 | param_1[6] & 0x8000ffff;
  param_1[6] = param_1[6] & 0x7fffffff | in_stack_00000064 << 0x1f;
  param_1[7] = param_1[7] & 0xffff8000 | in_stack_00000068 & 0x7fff;
  param_1[7] = param_1[7] & 0xffff | in_stack_0000006c << 0x10;
  param_1[8] = param_1[8] & 0xffff0000 | in_stack_00000070 & 0xffff;
  param_1[9] = (in_stack_00000074 & 7) << 0x15 | param_1[9] & 0xff1fffff;
  param_1[9] = param_1[9] & 0x3ffffff | in_stack_00000078 << 0x1a;
  param_1[10] = param_1[10] & 0xffffff00 | (uint)in_stack_0000007c;
  param_1[10] = (in_stack_00000080 & 0x1fff) << 0x10 | param_1[10] & 0xe000ffff;
  param_1[0xb] = in_stack_00000084;
  param_1[0xc] = in_stack_00000088 & 0xffff | param_1[0xc] & 0xffff0000;
  return;
}

