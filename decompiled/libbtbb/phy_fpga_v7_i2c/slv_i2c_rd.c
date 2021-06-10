/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_i2c.o -> slv_i2c_rd
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint slv_i2c_rd(undefined1 param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = i2c_readReg(param_1,1,param_2);
  return uVar1 & param_3;
}

