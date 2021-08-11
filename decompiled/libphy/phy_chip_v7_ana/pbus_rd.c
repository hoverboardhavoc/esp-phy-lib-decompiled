/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> pbus_rd
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint pbus_rd(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)pbus_rd_addr();
  uVar2 = pbus_rd_shift(param_1,param_2);
  return (0x1ff << (uVar2 & 0x1f) & *puVar1) >> (uVar2 & 0x1f) & 0xffff;
}

