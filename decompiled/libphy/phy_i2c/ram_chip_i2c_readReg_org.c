/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_i2c.o -> ram_chip_i2c_readReg_org
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ram_chip_i2c_readReg_org(uint param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  
  _DAT_600af81c = ~param_2;
  puVar1 = (uint *)((param_3 + 0x1802be00) * 4);
  *puVar1 = param_4 << 8 | param_1 | 0x4000000;
  do {
  } while ((int)(*puVar1 << 6) < 0);
  return *puVar1 >> 0x10 & 0xff;
}

