/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> rx_chan_noise
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
      iVar3 = (**(code **)(_g_phyFuns + 0x84))(*(code **)(_g_phyFuns + 0x84));
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

