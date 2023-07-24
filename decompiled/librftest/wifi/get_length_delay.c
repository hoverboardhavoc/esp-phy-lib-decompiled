/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librftest -> wifi.o -> get_length_delay
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_length_delay(int *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort auStack_1c [6];
  
  auStack_1c[0] = 300;
  auStack_1c[1] = 0x118;
  auStack_1c[2] = 0x104;
  auStack_1c[3] = 0xf0;
  auStack_1c[4] = 0xdc;
  auStack_1c[5] = 200;
  iVar2 = (**(code **)(_g_phyFuns + 0x120))(param_2,*(code **)(_g_phyFuns + 0x120));
  uVar3 = change_data_rate(param_2);
  if (param_2 < 4) {
    iVar5 = 200;
  }
  else {
    iVar5 = 100;
    if (7 < param_2) {
      iVar5 = 0x28;
      iVar4 = 0xa6;
      goto _L273;
    }
  }
  iVar4 = 600;
_L273:
  uVar1 = auStack_1c[iVar2];
  *param_1 = (int)((iVar4 - iVar5) * (uVar3 & 0xff)) / 8;
  param_1[1] = (uint)(((int)((uVar1 - 0x50) * 1000) / 0x14 + -1000) * iVar4) / 1000;
  return;
}

