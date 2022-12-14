/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_rx_cal.o -> get_iq_value
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_iq_value(byte *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = (byte)(param_2 >> 7) & 0x3f;
  if ((param_2 >> 7 & 0x20) != 0) {
    bVar1 = bVar1 - 0x40;
  }
  bVar2 = (byte)param_2 & 0x7f;
  *param_1 = bVar1;
  if ((param_2 & 0x40) != 0) {
    bVar2 = bVar2 + 0x80;
  }
  param_1[1] = bVar2;
  return;
}

