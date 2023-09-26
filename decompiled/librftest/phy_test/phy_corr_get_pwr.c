/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> phy_corr_get_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int phy_corr_get_pwr(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = (_DAT_600a0478 >> 0xc) + (_DAT_600a0484 >> 0xc);
  iVar3 = (_DAT_600a047c >> 0xc) - (_DAT_600a0480 >> 0xc);
  iVar6 = (_DAT_600a0478 >> 0xc) - (_DAT_600a0484 >> 0xc);
  iVar5 = (_DAT_600a047c >> 0xc) + (_DAT_600a0480 >> 0xc);
  uVar1 = iVar3 * iVar3 + iVar2 * iVar2;
  uVar4 = iVar5 * iVar5 + iVar6 * iVar6;
  return (int)((ulonglong)((longlong)iVar2 * (longlong)iVar2) >> 0x20) +
         (int)((ulonglong)((longlong)iVar3 * (longlong)iVar3) >> 0x20) +
         (uint)(uVar1 < (uint)(iVar2 * iVar2)) +
         (int)((ulonglong)((longlong)iVar6 * (longlong)iVar6) >> 0x20) +
         (int)((ulonglong)((longlong)iVar5 * (longlong)iVar5) >> 0x20) +
         (uint)(uVar4 < (uint)(iVar6 * iVar6)) + (uint)(uVar1 + uVar4 < uVar4);
}

