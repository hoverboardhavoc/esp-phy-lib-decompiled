/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> phy_test.o -> phy_corr_get_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint phy_corr_get_pwr(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = _DAT_6000614c - _DAT_60006150;
  iVar4 = _DAT_60006148 + _DAT_60006154;
  iVar7 = _DAT_60006148 - _DAT_60006154;
  iVar3 = _DAT_6000614c + _DAT_60006150;
  uVar5 = iVar1 * iVar1 + iVar4 * iVar4;
  uVar2 = iVar3 * iVar3 + iVar7 * iVar7;
  uVar6 = uVar5 + uVar2;
  return ((uint)(uVar6 < uVar2) +
         (int)((ulonglong)((longlong)iVar7 * (longlong)iVar7) >> 0x20) +
         (int)((ulonglong)((longlong)iVar3 * (longlong)iVar3) >> 0x20) +
         (uint)(uVar2 < (uint)(iVar7 * iVar7)) +
         (uint)(uVar5 < (uint)(iVar4 * iVar4)) +
         (int)((ulonglong)((longlong)iVar1 * (longlong)iVar1) >> 0x20) +
         (int)((ulonglong)((longlong)iVar4 * (longlong)iVar4) >> 0x20)) * 0x4000 | uVar6 >> 0x12;
}

