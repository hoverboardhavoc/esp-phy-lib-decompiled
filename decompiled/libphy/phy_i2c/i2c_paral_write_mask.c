/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_i2c.o -> i2c_paral_write_mask
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
  phy_i2c_enter_critical();
  i2c_paral_read(param_1,param_2,&bStack_32,param_6,param_7,abStack_31,in_stack_00000008);
  i2c_paral_write(param_1,param_2,
                  ~((1 << ((param_3 - param_4) + 1 & 0x1f)) + -1 << (param_4 & 0x1f)) &
                  (uint)bStack_32 | param_5 << (param_4 & 0x1f) & 0xffU,param_6,param_7,
                  ~((1 << ((param_8 - uVar1) + 1 & 0x1f)) + -1 << (uVar1 & 0x1f)) &
                  (uint)abStack_31[0] | (uint)in_stack_00000004 << (uVar1 & 0x1f) & 0xff,
                  in_stack_00000008);
  phy_i2c_exit_critical();
  return;
}

