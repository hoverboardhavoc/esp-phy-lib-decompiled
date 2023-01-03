/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_tsens.o -> ram_temp_to_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int ram_temp_to_power(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (param_1 - param_2) * 0x10000 >> 0x10;
  if (iVar2 < 1) {
    cVar1 = (char)(iVar2 / 10);
  }
  else {
    cVar1 = -(char)(iVar2 / 0x10);
  }
  return (int)cVar1;
}

