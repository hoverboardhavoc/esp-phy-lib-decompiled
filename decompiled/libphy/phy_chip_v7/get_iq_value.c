/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> get_iq_value
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

