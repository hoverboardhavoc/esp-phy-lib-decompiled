/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librftest -> wifi.o -> rx_chan_noise
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rx_chan_noise(char param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  chip_v7_set_chan((int)param_1,0);
  cVar2 = '\b';
  do {
    cVar1 = '\b';
    iVar4 = 0;
    do {
      iVar3 = check_noise_floor1();
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      cVar1 = cVar1 + -1;
      iVar4 = (int)(short)iVar3;
    } while (cVar1 != '\0');
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  phy_printf(&_LC47);
  return;
}

