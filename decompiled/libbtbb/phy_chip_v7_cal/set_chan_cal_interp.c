/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> set_chan_cal_interp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int set_chan_cal_interp(char *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = param_2 - 1U & 0xff;
  if (uVar1 < 6) {
    cVar2 = *param_1;
    iVar3 = ((int)param_1[1] - (int)cVar2) * uVar1;
  }
  else {
    if (10 < uVar1) {
      if (0xc < uVar1) {
        return (int)param_1[3];
      }
      cVar2 = (char)((int)(((int)param_1[3] - (int)param_1[2]) * (uVar1 - 10) * 5) / 0x16) +
              param_1[2];
      goto _L202;
    }
    cVar2 = param_1[1];
    iVar3 = ((int)param_1[2] - (int)cVar2) * (uVar1 - 5);
  }
  cVar2 = (char)(iVar3 / 5) + cVar2;
_L202:
  return (int)cVar2;
}

