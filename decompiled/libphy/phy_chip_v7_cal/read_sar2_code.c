/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> read_sar2_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int read_sar2_code(void)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_20 [20];
  
  sVar2 = 0x10;
  uVar1 = 0;
  do {
    pkdet_vol_start();
    iVar3 = read_sar_dout(auStack_20);
    sVar2 = sVar2 + -1;
    uVar1 = uVar1 + iVar3 & 0xffff;
  } while (sVar2 != 0);
  return (int)(uVar1 + 8) >> 4;
}

