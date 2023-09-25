/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librftest -> rf_test.o -> esp_tx_func_org
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_tx_func_org(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar1 = _short_gi_enable;
  uVar10 = *param_1;
  uVar7 = param_1[1];
  iVar9 = 0;
  if (2 < param_2) {
    iVar9 = (int)(char)param_1[2];
  }
  uVar8 = 0;
  if (5 < param_2) {
    uVar8 = param_1[5];
  }
  uVar5 = change_data_rate(uVar7);
  phy_tx_pwr_track_en = 1;
  phy_tx_pwr_correct_en = 1;
  iVar6 = 200;
  if ((3 < uVar7) && (iVar6 = 100, 7 < uVar7)) {
    iVar6 = 0x28;
  }
  iVar2 = 600;
  if (0x13 < uVar5) {
    iVar2 = 200;
  }
  if (param_2 < 4) {
    uVar3 = (iVar2 - iVar6) * uVar5 >> 3;
  }
  else {
    uVar3 = param_1[3];
    if (param_2 != 4) {
      uVar4 = param_1[4];
      goto _L37;
    }
  }
  uVar4 = 0x4b0;
  if (0x13 < uVar5) {
    uVar4 = 400;
  }
_L37:
  rftest_set_chan(uVar10 & 0xff,(uint)(tx_cbw40m_en != '\0') << 1);
  target_power_backoff(iVar9);
  phy_printf("Wifi tx out: chan=%d, rate=0x%x, BK=%d, len=%d, delay=%d, tx_num=%d\n",uVar10,uVar7,
             iVar9,uVar3,uVar4,uVar8);
  FillTxPacket(uVar3 + 0xa0000,uVar3,0,uVar7,0,iVar1 << 0x1c,3,2);
  WifiTxStart(uVar7 + 0xa0000,uVar8,uVar4,tx_cbw40m_en,0,1);
  phy_printf("Tx Over 0x%x\n",_DAT_60033c68 & 0xff);
  remove_11b_4p8G_spur(0,0,0);
  return;
}

