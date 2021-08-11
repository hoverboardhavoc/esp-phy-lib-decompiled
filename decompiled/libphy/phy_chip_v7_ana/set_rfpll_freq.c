/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> set_rfpll_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_rfpll_freq(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  rfpll_set_freq(param_2,param_1);
  write_rfpll_sdm(param_3);
  i2c_writeReg_Mask(0x62,1,0,6,6,0);
  i2c_writeReg_Mask(0x62,1,0,5,5,0);
  i2c_writeReg_Mask(0x62,1,0,5,5,1);
  uVar3 = chip_i2c_readReg();
  iVar1 = get_i2c_hostid(1);
  puVar2 = (uint *)((iVar1 + 0x18003800) * 4);
  do {
  } while ((int)(*puVar2 << 6) < 0);
  *puVar2 = (uVar3 & 0xbf | 0x40) << 0x10 | 0x5000062;
  do {
  } while ((int)(*puVar2 << 6) < 0);
  return;
}

