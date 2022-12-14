/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_basic.o -> ram_set_chan_cal_interp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int ram_set_chan_cal_interp(char *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = param_2 - 1U & 0xffff;
  if (uVar1 < 6) {
    cVar2 = (char)((int)(((int)param_1[1] - (int)*param_1) * uVar1) / 5) + *param_1;
  }
  else {
    cVar2 = param_1[2];
    if (uVar1 < 0xb) {
      cVar2 = (char)((int)(((int)cVar2 - (int)param_1[1]) * (uVar1 - 5)) / 5) + param_1[1];
    }
    else {
      if (uVar1 == 0xb) {
        return (int)cVar2;
      }
      cVar2 = cVar2 + '\x02';
    }
  }
  return (int)cVar2;
}

