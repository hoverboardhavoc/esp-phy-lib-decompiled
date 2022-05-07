/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
 * Source: libphy -> phy_debug.o -> get_iq_value
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_iq_value(byte *param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 6;
  if (param_3 == 0) {
    bVar1 = (byte)uVar3 & 0x1f;
    if ((uVar3 & 0x10) != 0) {
      bVar1 = bVar1 - 0x20;
    }
  }
  else {
    bVar1 = (byte)uVar3 & 0x3f;
    if ((uVar3 & 0x20) != 0) {
      bVar1 = bVar1 - 0x40;
    }
  }
  bVar2 = (byte)param_2 & 0x3f;
  *param_1 = bVar1;
  if ((param_2 & 0x20) != 0) {
    bVar2 = bVar2 - 0x40;
  }
  param_1[1] = bVar2;
  return;
}

