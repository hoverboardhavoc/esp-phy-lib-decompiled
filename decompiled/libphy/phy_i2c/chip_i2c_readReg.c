/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_i2c.o -> chip_i2c_readReg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 chip_i2c_readReg(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  phy_i2c_enter_critical();
  uVar1 = get_i2c_read_mask(param_1);
  uVar2 = get_i2c_hostid(param_1);
  uVar1 = chip_i2c_readReg_org(param_1,uVar1,uVar2,param_2);
  phy_i2c_exit_critical();
  return uVar1;
}

