/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librftest -> wifi.o -> txpwr_backoff_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txpwr_backoff_test(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char cStack_35;
  undefined1 local_34 [12];
  
  puVar5 = local_34;
  cVar2 = '\x01';
  do {
    chip_v7_set_chan((int)cVar2,0);
    txcal_debuge_mode();
    iVar3 = tx_pwr_backoff(&phy_param,&cStack_35,
                           (int)(((byte)txiq_cal_init + 0x28) * 0x1000000) >> 0x18,0);
    if ((iVar3 != 0) || (uVar1 = 0, cStack_35 != '\x01')) {
      iVar4 = tx_pwr_backoff(&phy_param,&cStack_35,
                             (int)(((byte)txiq_cal_init + 0x28) * 0x1000000) >> 0x18,0);
      if ((iVar4 == 0) && (cStack_35 == '\x01')) {
        uVar1 = 0;
      }
      else {
        uVar1 = (undefined1)((((iVar3 + iVar4) * 0x10000 >> 0x10) + 1) / 2);
      }
    }
    cVar2 = cVar2 + '\x05';
    *puVar5 = uVar1;
    txcal_work_mode();
    puVar5 = puVar5 + 1;
  } while (cVar2 != '\x10');
  phy_printf("tx_backoff: %d, %d, %d\n",local_34[0],local_34[1],local_34[2]);
  return;
}

