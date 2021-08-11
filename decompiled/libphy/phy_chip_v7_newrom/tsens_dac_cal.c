/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> tsens_dac_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 tsens_dac_cal(int param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)*param_2;
  if (uVar3 < 5) {
    iVar4 = (int)*(short *)(&_LANCHOR0 + uVar3 * 2);
    iVar2 = (int)*(short *)(&_LANCHOR1 + uVar3 * 2);
  }
  else {
    iVar2 = 0x37;
    iVar4 = 10;
  }
  if (param_1 < iVar4) {
    if (uVar3 == 0) {
      return 0;
    }
    cVar1 = -1;
  }
  else {
    if (param_1 <= iVar2) {
      return 0;
    }
    if (3 < uVar3) {
      return 0;
    }
    cVar1 = '\x01';
  }
  *param_2 = *param_2 + cVar1;
  return 1;
}

