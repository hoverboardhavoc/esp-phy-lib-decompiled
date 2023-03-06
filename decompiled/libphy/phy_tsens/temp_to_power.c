/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_tsens.o -> temp_to_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int temp_to_power(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (param_1 - param_2) * 0x10000;
  iVar3 = iVar2 >> 0x10;
  if (iVar3 < 1) {
    cVar1 = (char)(iVar3 / 3);
  }
  else {
    cVar1 = (char)(iVar2 >> 0x12);
  }
  return (int)cVar1;
}

