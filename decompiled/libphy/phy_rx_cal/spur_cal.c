/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_cal.o -> spur_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int spur_cal(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((param_4 != 0) && (param_3 != 0)) {
    iVar1 = ((param_1 * param_4) / param_3) * param_3;
    iVar2 = (iVar1 * 10) / param_4;
    if (param_1 * 10 - iVar2 < param_2 * 10) {
      return iVar2 + param_1 * -10;
    }
    iVar1 = param_1 * -10 + ((param_3 + iVar1) * 10) / param_4;
    if (param_2 * 10 <= iVar1) {
      return 0;
    }
  }
  return iVar1;
}

