/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_prep_cs
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_bt_v9_prep_cs(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
                     ,uint param_7,int param_8)

{
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint in_stack_00000024;
  uint in_stack_00000028;
  int in_stack_0000002c;
  byte in_stack_00000030;
  uint in_stack_00000034;
  uint in_stack_00000038;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  uint in_stack_00000044;
  uint in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000054;
  uint in_stack_00000058;
  int in_stack_0000005c;
  uint in_stack_00000060;
  uint in_stack_00000064;
  uint in_stack_00000068;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  uint in_stack_00000074;
  uint in_stack_00000078;
  int in_stack_0000007c;
  uint in_stack_00000080;
  int in_stack_00000084;
  byte in_stack_00000088;
  uint in_stack_0000008c;
  
  *param_1 = *param_1 & 0xffffffe0 | param_2 & 0x1f;
  *param_1 = (param_3 & 1) << 7 | *param_1 & 0xffffff7f;
  *param_1 = (param_4 & 1) << 8 | *param_1 & 0xfffffeff;
  *param_1 = (param_5 & 1) << 9 | *param_1 & 0xfffffdff;
  *param_1 = (param_6 & 1) << 10 | *param_1 & 0xfffffbff;
  *param_1 = (param_7 & 7) << 0xc | *param_1 & 0xffff8fff;
  *param_1 = *param_1 & 0xffff | param_8 << 0x10;
  param_1[1] = (uint)(param_8 << 4) >> 0x14 | param_1[1] & 0xfffff000;
  param_1[1] = (in_stack_00000000 & 0x1f) << 0x10 | param_1[1] & 0xffe0ffff;
  param_1[1] = (in_stack_00000004 & 7) << 0x18 | param_1[1] & 0xf8ffffff;
  param_1[1] = (in_stack_00000008 & 1) << 0x1b | param_1[1] & 0xf7ffffff;
  param_1[1] = (in_stack_0000000c & 1) << 0x1c | param_1[1] & 0xefffffff;
  param_1[1] = (in_stack_00000010 & 1) << 0x1d | param_1[1] & 0xdfffffff;
  param_1[1] = (in_stack_00000014 & 1) << 0x1e | param_1[1] & 0xbfffffff;
  param_1[1] = param_1[1] & 0x7fffffff | in_stack_00000018 << 0x1f;
  param_1[2] = in_stack_0000001c;
  param_1[3] = param_1[3] & 0xffff0000 | in_stack_00000020 & 0xffff;
  param_1[3] = param_1[3] & 0xffff | in_stack_00000024 << 0x10;
  param_1[4] = param_1[4] & 0xffff0000 | in_stack_00000024 >> 0x10;
  param_1[4] = (in_stack_00000028 & 3) << 0x10 | param_1[4] & 0xfffcffff;
  param_1[4] = param_1[4] & 0x3fffff | in_stack_0000002c << 0x16;
  param_1[5] = param_1[5] & 0xffffff00 | (uint)in_stack_00000030;
  param_1[5] = (in_stack_00000034 & 0x7f) << 8 | param_1[5] & 0xffff80ff;
  param_1[5] = (in_stack_00000038 & 1) << 0xf | param_1[5] & 0xffff7fff;
  param_1[5] = (in_stack_0000003c & 3) << 0x10 | param_1[5] & 0xfffcffff;
  param_1[5] = (in_stack_00000040 & 1) << 0x12 | param_1[5] & 0xfffbffff;
  param_1[5] = (in_stack_00000044 & 1) << 0x13 | param_1[5] & 0xfff7ffff;
  param_1[5] = (in_stack_00000048 & 1) << 0x16 | param_1[5] & 0xffbfffff;
  param_1[5] = (in_stack_0000004c & 1) << 0x17 | param_1[5] & 0xff7fffff;
  param_1[5] = (in_stack_00000050 & 3) << 0x18 | param_1[5] & 0xfcffffff;
  param_1[5] = (in_stack_00000054 & 1) << 0x1a | param_1[5] & 0xfbffffff;
  param_1[5] = (in_stack_00000058 & 1) << 0x1b | param_1[5] & 0xf7ffffff;
  param_1[5] = param_1[5] & 0x3fffffff | in_stack_0000005c << 0x1e;
  param_1[6] = param_1[6] & 0xffffe000 | in_stack_00000060 & 0x1fff;
  param_1[6] = (in_stack_00000064 & 1) << 0xf | param_1[6] & 0xffff7fff;
  param_1[6] = (in_stack_00000068 & 0x7fff) << 0x10 | param_1[6] & 0x8000ffff;
  param_1[7] = in_stack_0000006c;
  param_1[8] = in_stack_00000070;
  param_1[9] = param_1[9] & 0xffff8000 | in_stack_00000074 & 0x7fff;
  param_1[9] = (in_stack_00000078 & 0xff) << 0x10 | param_1[9] & 0xff00ffff;
  param_1[9] = param_1[9] & 0xffffff | in_stack_0000007c << 0x18;
  param_1[10] = param_1[10] & 0xffffe000 | in_stack_00000080 & 0x1fff;
  param_1[10] = param_1[10] & 0xffff | in_stack_00000084 << 0x10;
  param_1[0xb] = param_1[0xb] & 0xffffff00 | (uint)in_stack_00000088;
  param_1[0xb] = (in_stack_0000008c & 0xff) << 8 | param_1[0xb] & 0xffff00ff;
  return;
}

