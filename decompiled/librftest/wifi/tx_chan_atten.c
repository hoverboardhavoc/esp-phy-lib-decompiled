/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librftest -> wifi.o -> tx_chan_atten
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void tx_chan_atten(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 uStack_31;
  byte local_30 [28];
  
  uStack_31 = 0x38;
  txcal_debuge_mode();
  iVar4 = 0x3c;
  cVar2 = '\0';
  pbVar3 = local_30;
  do {
    cVar2 = cVar2 + '\x01';
    chip_v7_set_chan((int)cVar2,0);
    rfcal_pwrctrl(0x80,&uStack_31,1,0x28,pbVar3,0xf4,iVar4,0);
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    iVar4 = (int)((bVar1 + 0x28) * 0x1000000) >> 0x18;
  } while (cVar2 != '\x0e');
  txcal_work_mode();
  iVar4 = 0;
  do {
    pbVar3 = local_30 + iVar4;
    iVar4 = iVar4 + 1;
    phy_printf(&_LC47,(int)(char)*pbVar3);
  } while (iVar4 != 0xe);
  return;
}

