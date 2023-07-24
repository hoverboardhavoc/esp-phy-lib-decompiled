/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librftest -> rf_test.o -> esp_tx_func
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_tx_func(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  iVar1 = _short_gi_enable;
  if (fcc_mode_sel == '\x01') {
    uVar2 = 0;
    uVar9 = *param_1;
    uVar5 = param_1[1];
    iVar10 = 0;
    if (2 < param_2) {
      iVar10 = (int)(char)param_1[2];
    }
    fcc_mode_flag = 1;
    phy_tx_pwr_track_en = 1;
    phy_tx_pwr_correct_en = 1;
    phy_printf("Wifi tx out: channel=%d, rate=0x%x, BK=%d, length=%d, delay=%d\n",uVar9,uVar5,iVar10
               ,0xfff,0);
    rftest_set_chan(uVar9 & 0xff,(uint)(tx_cbw40m_en != '\0') << 1);
    if (uVar9 == 0xe) {
      tx_cont_cfg(2);
      uVar2 = _DAT_6001c400 >> 0xd;
      _DAT_6001c400 = _DAT_6001c400 & 0xffff9fff | 0x2000;
      uVar2 = uVar2 & 3;
    }
    else {
      tx_cont_cfg(1);
    }
    remove_11b_4p8G_spur(1,2,0x1e);
    target_power_backoff(iVar10);
    FillTxPacket(0xa0fff,0xfff,0,uVar5,0,iVar1 << 0x1c,1,2);
    WifiTxStart(uVar5 + 0xa0000,0,0,tx_cbw40m_en,0,1);
    if (uVar9 == 0xe) {
      _DAT_6001c400 = uVar2 << 0xd | _DAT_6001c400 & 0xffff9fff;
    }
    remove_11b_4p8G_spur(0,0,0);
    tx_cont_cfg(0);
    phy_printf("Tx Over\n",_DAT_60033c68 & 0xff,uVar5,0xfff,iVar1);
    return;
  }
  uVar5 = *param_1;
  uVar2 = param_1[1];
  iVar10 = 0;
  if (2 < param_2) {
    iVar10 = (int)(char)param_1[2];
  }
  uVar9 = 0;
  if (5 < param_2) {
    uVar9 = param_1[5];
  }
  uVar7 = change_data_rate(uVar2);
  phy_tx_pwr_track_en = 1;
  phy_tx_pwr_correct_en = 1;
  iVar8 = 200;
  if ((3 < uVar2) && (iVar8 = 100, 7 < uVar2)) {
    iVar8 = 0x28;
  }
  iVar3 = 600;
  if (0x13 < uVar7) {
    iVar3 = 200;
  }
  if (param_2 < 4) {
    uVar4 = (iVar3 - iVar8) * uVar7 >> 3;
  }
  else {
    uVar4 = param_1[3];
    if (param_2 != 4) {
      uVar6 = param_1[4];
      goto _L34;
    }
  }
  uVar6 = 0x4b0;
  if (0x13 < uVar7) {
    uVar6 = 400;
  }
_L34:
  rftest_set_chan(uVar5 & 0xff,(uint)(tx_cbw40m_en != '\0') << 1);
  tx_cont_cfg(1);
  target_power_backoff(iVar10);
  phy_printf("Wifi tx out: chan=%d, rate=0x%x, BK=%d, len=%d, delay=%d, tx_num=%d\n",uVar5,uVar2,
             iVar10,uVar4,uVar6,uVar9);
  FillTxPacket(uVar4 + 0xa0000,uVar4,0,uVar2,0,iVar1 << 0x1c,3,2);
  WifiTxStart(uVar2 + 0xa0000,uVar9,uVar6,tx_cbw40m_en,0,1);
  phy_printf("Tx Over 0x%x\n",_DAT_60033c68 & 0xff);
  tx_cont_cfg(0);
  remove_11b_4p8G_spur(0,0,0);
  return;
}

