/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> get_length_delay
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

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
  iVar2 = get_target_power_offset(param_2);
  uVar3 = change_data_rate(param_2);
  if (param_2 < 4) {
    iVar5 = 200;
  }
  else {
    iVar5 = 100;
    if (7 < param_2) {
      iVar5 = 0x28;
      iVar4 = 0xa6;
      goto _L167;
    }
  }
  iVar4 = 600;
_L167:
  uVar1 = auStack_1c[iVar2];
  *param_1 = (int)((iVar4 - iVar5) * (uVar3 & 0xff)) / 8;
  param_1[1] = (uint)(((int)((uVar1 - 0x50) * 1000) / 0x14 + -1000) * iVar4) / 1000;
  return;
}

