/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_i2c.o -> chip_i2c_readReg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint chip_i2c_readReg(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = get_i2c_read_mask();
  iVar2 = get_i2c_hostid(param_1);
  _DAT_600ad81c = ~uVar1;
  puVar3 = (uint *)((iVar2 + 0x1802b600) * 4);
  *puVar3 = param_2 << 8 | param_1 | 0x4000000;
  do {
  } while ((int)(*puVar3 << 6) < 0);
  return *puVar3 >> 0x10 & 0xff;
}

