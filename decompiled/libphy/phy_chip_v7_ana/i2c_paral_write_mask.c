/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> i2c_paral_write_mask
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void i2c_paral_write_mask
               (undefined4 param_1,undefined4 param_2,int param_3,uint param_4,int param_5,
               undefined4 param_6,undefined4 param_7,int param_8)

{
  uint uVar1;
  byte in_stack_00000000;
  byte in_stack_00000004;
  undefined1 in_stack_00000008;
  byte bStack_32;
  byte abStack_31 [9];
  
  uVar1 = (uint)in_stack_00000000;
  i2c_paral_read(&bStack_32,param_6,param_7,abStack_31,in_stack_00000008);
  i2c_paral_write(param_1,param_2,
                  ~((1 << ((param_3 - param_4) + 1 & 0x1f)) + -1 << (param_4 & 0x1f)) &
                  (uint)bStack_32 | param_5 << (param_4 & 0x1f) & 0xffU,param_6,param_7,
                  ~((1 << ((param_8 - uVar1) + 1 & 0x1f)) + -1 << (uVar1 & 0x1f)) &
                  (uint)abStack_31[0] | (uint)in_stack_00000004 << (uVar1 & 0x1f) & 0xff,
                  in_stack_00000008);
  return;
}

