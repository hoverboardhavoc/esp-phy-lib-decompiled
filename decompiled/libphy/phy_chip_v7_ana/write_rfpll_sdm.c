/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> write_rfpll_sdm
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void write_rfpll_sdm(undefined1 *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  i2c_writeReg_Mask(99,1,0,3,3,0);
  chip_i2c_writeReg(99,1,3,*param_1);
  chip_i2c_writeReg(99,1,4,param_1[1]);
  chip_i2c_writeReg(99,1,5,param_1[2]);
  uVar3 = chip_i2c_readReg();
  iVar1 = get_i2c_hostid(1);
  puVar2 = (uint *)((iVar1 + 0x18003800) * 4);
  do {
  } while ((int)(*puVar2 << 6) < 0);
  *puVar2 = (uVar3 & 0xf7 | 8) << 0x10 | 0x5000063;
  do {
  } while ((int)(*puVar2 << 6) < 0);
  return;
}

