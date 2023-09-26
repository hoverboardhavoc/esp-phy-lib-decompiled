/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> ram_get_corr_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_get_corr_power(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = _DAT_600a048c;
  iVar1 = _DAT_600a0488;
  iVar4 = (_DAT_600a0478 >> 9) + (_DAT_600a0484 >> 9);
  iVar3 = (_DAT_600a047c >> 9) - (_DAT_600a0480 >> 9);
  iVar5 = (param_2 + -2) * 2;
  *param_1 = _DAT_600a0490 >> (param_2 - 3U & 0x1f);
  iVar1 = iVar1 >> 8;
  iVar2 = iVar2 >> 8;
  iVar3 = __ashrdi3((uint)((uint)(iVar3 * iVar3 + iVar4 * iVar4) < (uint)(iVar4 * iVar4)) +
                    (int)((ulonglong)((longlong)iVar4 * (longlong)iVar4) >> 0x20) +
                    (int)((ulonglong)((longlong)iVar3 * (longlong)iVar3) >> 0x20),iVar5);
  param_1[1] = iVar3;
  iVar1 = __ashrdi3((uint)((uint)(iVar2 * iVar2 + iVar1 * iVar1) < (uint)(iVar1 * iVar1)) +
                    (int)((ulonglong)((longlong)iVar1 * (longlong)iVar1) >> 0x20) +
                    (int)((ulonglong)((longlong)iVar2 * (longlong)iVar2) >> 0x20),iVar5);
  param_1[2] = iVar1;
  return;
}

