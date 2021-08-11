/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> chip_i2c_writeReg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void chip_i2c_writeReg(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = get_i2c_hostid();
  puVar2 = (uint *)((iVar1 + 0x18003800) * 4);
  do {
  } while ((int)(*puVar2 << 6) < 0);
  *puVar2 = param_3 << 0x10 | param_1 | param_2 << 8 | 0x5000000;
  do {
  } while ((int)(*puVar2 << 6) < 0);
  return;
}

