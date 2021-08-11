/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> txpwr_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_offset(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = _DAT_0001310c;
  if (-1 < (int)(_DAT_0001310c << 9)) {
    iVar2 = linear_to_db(0,3);
    iVar3 = linear_to_db(0xce4,3);
    _DAT_00013194 = (((iVar2 - iVar3) * 0x2000000 >> 0x18) + 2 >> 2 & 0xffU) << 8;
    _DAT_0001310c = uVar1 | 0x400000;
  }
  return;
}

