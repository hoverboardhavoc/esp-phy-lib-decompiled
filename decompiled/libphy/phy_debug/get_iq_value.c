/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_debug.o -> get_iq_value
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
  if ((param_2 & 0x60) != 0) {
    bVar2 = bVar2 + 0x80;
  }
  param_1[1] = bVar2;
  return;
}

