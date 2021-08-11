/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> set_chan_cal_interp
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

