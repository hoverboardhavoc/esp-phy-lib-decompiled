/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_le_rxstat_unpack
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_le_rxstat_unpack(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                        uint *param_6,uint *param_7,uint *param_8)

{
  uint uVar1;
  uint *in_stack_00000000;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  
  uVar1 = *param_1;
  *param_2 = uVar1 >> 0x1b;
  *param_3 = uVar1 >> 0x19 & 1;
  *param_4 = uVar1 >> 0x18 & 1;
  *param_5 = uVar1 >> 0x17 & 1;
  *param_6 = uVar1 >> 0x16 & 1;
  *param_7 = uVar1 >> 0x15 & 1;
  *param_8 = uVar1 >> 0x14 & 1;
  *in_stack_00000000 = uVar1 >> 0x13 & 1;
  *in_stack_00000004 = uVar1 >> 0x12 & 1;
  *in_stack_00000008 = uVar1 >> 0x11 & 1;
  *in_stack_0000000c = uVar1 >> 0x10 & 1;
  return;
}

