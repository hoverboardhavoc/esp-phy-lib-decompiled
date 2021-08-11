/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> write_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void write_pll_cap(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = get_i2c_hostid(1);
  puVar2 = (uint *)((iVar1 + 0x18003800) * 4);
  do {
  } while ((int)(*puVar2 << 6) < 0);
  *puVar2 = (param_1 & 0xff) << 0x10 | 0x5000162;
  do {
  } while ((int)(*puVar2 << 6) < 0);
  return;
}

