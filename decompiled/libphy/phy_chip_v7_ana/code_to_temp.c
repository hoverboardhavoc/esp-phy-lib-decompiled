/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> code_to_temp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int code_to_temp(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = param_2 * -0xae4 + param_1 * 0x2c;
  if (iVar2 < 0x6a10) {
    sVar1 = (short)((iVar2 + -0x804) / 100);
    if (sVar1 < -200) {
      sVar1 = -200;
    }
    return (int)sVar1;
  }
  return 0xfa;
}

