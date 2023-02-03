/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tsens.o -> code_to_temp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int code_to_temp(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = param_2 * -0xae4 + param_1 * 0x2c;
  if (iVar2 < 0x6a10) {
    sVar1 = (short)((iVar2 + -0x804) / 100);
    if (sVar1 < -200) {
      sVar1 = -200;
    }
    return (int)sVar1;
  }
  return 0xfa;
}

