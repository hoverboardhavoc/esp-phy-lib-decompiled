/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7.o -> phy_corr_get_pwr
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
  
  iVar2 = (_DAT_60006148 >> 0xc) + (_DAT_60006154 >> 0xc);
  iVar3 = (_DAT_6000614c >> 0xc) - (_DAT_60006150 >> 0xc);
  iVar6 = (_DAT_60006148 >> 0xc) - (_DAT_60006154 >> 0xc);
  iVar5 = (_DAT_6000614c >> 0xc) + (_DAT_60006150 >> 0xc);
  uVar1 = iVar3 * iVar3 + iVar2 * iVar2;
  uVar4 = iVar5 * iVar5 + iVar6 * iVar6;
  return (int)((ulonglong)((longlong)iVar2 * (longlong)iVar2) >> 0x20) +
         (int)((ulonglong)((longlong)iVar3 * (longlong)iVar3) >> 0x20) +
         (uint)(uVar1 < (uint)(iVar2 * iVar2)) +
         (int)((ulonglong)((longlong)iVar6 * (longlong)iVar6) >> 0x20) +
         (int)((ulonglong)((longlong)iVar5 * (longlong)iVar5) >> 0x20) +
         (uint)(uVar4 < (uint)(iVar6 * iVar6)) + (uint)(uVar1 + uVar4 < uVar4);
}

