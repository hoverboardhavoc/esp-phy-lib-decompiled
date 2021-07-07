/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> i2c_readReg_Mask
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

