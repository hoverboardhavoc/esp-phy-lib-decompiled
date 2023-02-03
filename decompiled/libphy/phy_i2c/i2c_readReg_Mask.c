/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_i2c.o -> i2c_readReg_Mask
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint i2c_readReg_Mask(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = chip_i2c_readReg();
  return iVar1 >> (param_2 & 0x1f) & (1 << ((param_1 - param_2) + 1 & 0x1f)) - 1U & 0xff;
}

