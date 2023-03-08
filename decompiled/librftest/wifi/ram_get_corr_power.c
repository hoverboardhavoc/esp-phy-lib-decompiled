/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  
  iVar2 = _DAT_60006160;
  iVar1 = _DAT_6000615c;
  iVar4 = (_DAT_60006148 >> 9) + (_DAT_60006154 >> 9);
  iVar3 = (_DAT_6000614c >> 9) - (_DAT_60006150 >> 9);
  iVar5 = (param_2 + -2) * 2;
  *param_1 = _DAT_60006164 >> (param_2 - 3U & 0x1f);
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

