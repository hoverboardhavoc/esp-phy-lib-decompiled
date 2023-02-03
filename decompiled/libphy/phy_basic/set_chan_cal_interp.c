/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_basic.o -> set_chan_cal_interp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int set_chan_cal_interp(char *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = param_2 - 1U & 0xff;
  if (uVar1 < 6) {
    cVar2 = (char)((int)(((int)param_1[1] - (int)*param_1) * uVar1) / 5) + *param_1;
  }
  else {
    if (10 < uVar1) {
      return (int)param_1[2];
    }
    cVar2 = (char)((int)(((int)param_1[2] - (int)param_1[1]) * (uVar1 - 5)) / 5) + param_1[1];
  }
  return (int)cVar2;
}

