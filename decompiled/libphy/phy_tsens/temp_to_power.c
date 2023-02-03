/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
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
    cVar1 = (char)(iVar3 / 4);
  }
  else {
    cVar1 = (char)(iVar2 >> 0x13);
  }
  return (int)cVar1;
}

