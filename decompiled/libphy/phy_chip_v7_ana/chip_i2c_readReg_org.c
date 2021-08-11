/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> chip_i2c_readReg_org
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint chip_i2c_readReg_org(uint param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  
  _DAT_6000e044 = ~param_2;
  puVar1 = (uint *)((param_3 + 0x18003800) * 4);
  *puVar1 = param_4 << 8 | param_1 | 0x4000000;
  do {
  } while ((int)(*puVar1 << 6) < 0);
  return *puVar1 >> 0x10 & 0xff;
}

