/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_i2c.o -> chip_i2c_readReg_org
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint chip_i2c_readReg_org(uint param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  
  _DAT_600ad81c = ~param_2;
  puVar1 = (uint *)((param_3 + 0x1802b600) * 4);
  *puVar1 = param_4 << 8 | param_1 | 0x4000000;
  do {
  } while ((int)(*puVar1 << 6) < 0);
  return *puVar1 >> 0x10 & 0xff;
}

