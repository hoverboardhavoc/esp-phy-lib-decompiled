/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> rx_chan_noise_all
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rx_chan_noise_all(void)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  short local_4c [14];
  short asStack_30 [4];
  
  psVar3 = local_4c;
  uVar8 = 1;
  iVar7 = 0;
  psVar10 = psVar3;
  do {
    chip_v7_set_chan(uVar8 & 0xffff,0);
    cVar6 = '\x04';
    iVar2 = 0;
    do {
      cVar5 = '\x04';
      iVar9 = 0;
      do {
        iVar4 = check_noise_floor();
        if (iVar9 < iVar4) {
          iVar4 = iVar9;
        }
        cVar5 = cVar5 + -1;
        iVar9 = (int)(short)iVar4;
      } while (cVar5 != '\0');
      cVar6 = cVar6 + -1;
      iVar9 = (iVar2 + iVar9) * 0x10000;
      iVar2 = iVar9 >> 0x10;
    } while (cVar6 != '\0');
    *psVar10 = (short)((uint)iVar9 >> 0x10);
    if (iVar7 < iVar2) {
      iVar2 = iVar7;
    }
    uVar8 = uVar8 + 1;
    iVar7 = (int)(short)iVar2;
    psVar10 = psVar10 + 1;
  } while (uVar8 != 0xf);
  phy_printf(&_LC28,iVar7);
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
    phy_printf(&_LC28,(int)sVar1);
  } while (psVar3 != asStack_30);
  return;
}

