/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
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
  phy_printf(&_LC49);
  return;
}

