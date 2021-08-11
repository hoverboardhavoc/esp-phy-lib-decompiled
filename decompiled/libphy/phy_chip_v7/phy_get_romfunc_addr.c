/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> phy_get_romfunc_addr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_get_romfunc_addr(void)

{
  int iVar1;
  
  iVar1 = phy_get_romfuncs();
  g_phyFuns = iVar1;
  *(undefined **)(iVar1 + 400) = &chip_i2c_readReg;
  *(undefined **)(iVar1 + 0x180) = &get_i2c_hostid;
  return;
}

