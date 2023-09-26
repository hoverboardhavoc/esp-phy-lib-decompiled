/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> rx_chan_noise
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rx_chan_noise(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  chip_v7_set_chan(0);
  cVar2 = '\b';
  do {
    cVar1 = '\b';
    iVar4 = 0;
    do {
      iVar3 = check_noise_floor();
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      cVar1 = cVar1 + -1;
      iVar4 = (int)(short)iVar3;
    } while (cVar1 != '\0');
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  phy_printf(&_LC28);
  return;
}

