/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> chip_i2c_readReg
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
  _DAT_6000e044 = ~uVar1;
  puVar3 = (uint *)((iVar2 + 0x18003800) * 4);
  *puVar3 = param_2 << 8 | param_1 | 0x4000000;
  do {
  } while ((int)(*puVar3 << 6) < 0);
  return *puVar3 >> 0x10 & 0xff;
}

