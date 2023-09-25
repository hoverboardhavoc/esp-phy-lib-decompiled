/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
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
  char cVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  short local_4c [14];
  short asStack_30 [4];
  
  psVar3 = local_4c;
  cVar5 = '\0';
  iVar8 = 0;
  psVar10 = psVar3;
  do {
    cVar5 = cVar5 + '\x01';
    chip_v7_set_chan((int)cVar5,0);
    cVar7 = '\x04';
    iVar2 = 0;
    do {
      cVar6 = '\x04';
      iVar9 = 0;
      do {
        iVar4 = check_noise_floor1();
        if (iVar9 < iVar4) {
          iVar4 = iVar9;
        }
        cVar6 = cVar6 + -1;
        iVar9 = (int)(short)iVar4;
      } while (cVar6 != '\0');
      cVar7 = cVar7 + -1;
      iVar9 = (iVar2 + iVar9) * 0x10000;
      iVar2 = iVar9 >> 0x10;
    } while (cVar7 != '\0');
    *psVar10 = (short)((uint)iVar9 >> 0x10);
    if (iVar8 < iVar2) {
      iVar2 = iVar8;
    }
    iVar8 = (int)(short)iVar2;
    psVar10 = psVar10 + 1;
  } while (cVar5 != '\x0e');
  phy_printf(&_LC47,iVar8);
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
    phy_printf(&_LC47,(int)sVar1);
  } while (psVar3 != asStack_30);
  return;
}

