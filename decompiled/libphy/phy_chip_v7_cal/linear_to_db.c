/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> linear_to_db
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int linear_to_db(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte abStack_20 [20];
  
  memcpy(abStack_20,&_LANCHOR1,0x10);
  if (param_2 < 3) {
    uVar1 = param_1 << (3 - param_2 & 0x1f);
  }
  else {
    uVar1 = param_1 >> (param_2 - 3 & 0x1f);
  }
  iVar2 = __clzsi2(uVar1);
  uVar3 = (0x1c - iVar2) * 0x1000000 >> 0x18;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  else {
    uVar1 = (int)uVar1 >> (uVar3 - 1 & 0x1f);
  }
  return (int)(((uVar3 & 0xffff) * 0x30 + (uint)abStack_20[uVar1 & 0xf]) * 0x10000) >> 0x10;
}

