/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> get_rf_freq_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_rf_freq_cap(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  
  set_rf_freq_reg(phy_param,param_1,param_2,param_3);
  uVar1 = chip_i2c_readReg(0x62,1,5);
  *param_4 = uVar1;
  bVar2 = chip_i2c_readReg(0x62,1,6);
  param_4[1] = bVar2 & 0xf | 0x80;
  return;
}

