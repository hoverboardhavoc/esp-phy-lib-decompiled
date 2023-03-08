/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_fill_FHS_buf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_bt_v9_fill_FHS_buf
               (undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
               uint param_6,uint param_7,uint param_8)

{
  uint in_stack_00000000;
  uint in_stack_00000004;
  
  *param_1 = param_2;
  param_1[1] = (param_4 & 0xffffff) << 2 | (param_6 & 3) << 0x1c | (param_5 & 1) << 0x1a |
               param_3 & 3 | 0x80000000;
  param_1[2] = (param_8 & 0xffff) << 8 | param_7 & 0xff | in_stack_00000000 << 0x18;
  param_1[3] = in_stack_00000000 >> 8 & 0xffff | (in_stack_00000004 & 7) << 0x10;
  return;
}

