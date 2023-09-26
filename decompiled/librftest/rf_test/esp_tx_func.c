/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  
  iVar1 = _short_gi_enable;
  if (fcc_mode_sel == '\x01') {
    uVar2 = 0;
    uVar8 = *param_1;
    uVar3 = param_1[1];
    iVar10 = 0;
    if (2 < param_2) {
      iVar10 = (int)(char)param_1[2];
    }
    phy_printf("Wifi tx out: channel=%d, rate=0x%x, BK=%d, length=%d, delay=%d\n",uVar8,uVar3,iVar10
               ,0xfff,0);
    rftest_set_chan(uVar8 & 0xffff,(uint)(tx_cbw40m_en != '\0') << 1);
    if (uVar8 == 0xe) {
      tx_cont_cfg(2);
      uVar2 = _DAT_600a7400 >> 0xd;
      _DAT_600a7400 = _DAT_600a7400 & 0xffff9fff | 0x2000;
      uVar2 = uVar2 & 3;
    }
    else {
      tx_cont_cfg(1);
    }
    remove_11b_4p8G_spur(1,2,0x14);
    target_power_backoff(iVar10);
    FillTxPacket(0xa0fff,0xfff,0,uVar3,0,iVar1 << 0x1c,1,2);
    WifiTxStart_org(uVar3 + 0xa0000,0,0,tx_cbw40m_en,0,1);
    if (uVar8 == 0xe) {
      _DAT_600a7400 = uVar2 << 0xd | _DAT_600a7400 & 0xffff9fff;
    }
    remove_11b_4p8G_spur(0,0,0);
    tx_cont_cfg(0);
    phy_printf("Tx Over\n",_DAT_600a4c74 & 0xff,uVar3,0xfff,iVar1);
    return;
  }
  uVar2 = param_1[1];
  uVar3 = *param_1;
  iVar10 = 0;
  if (2 < param_2) {
    iVar10 = (int)(char)param_1[2];
  }
  uVar8 = 0;
  if (5 < param_2) {
    uVar8 = param_1[5];
  }
  if (_phy_11ax_array == 0) {
    uVar9 = 0x3f800000;
  }
  else {
    uVar9 = 0x400ccccd;
  }
  seed_vs_rate(uVar2 & 0xff);
  if (0x1f < uVar2) {
    uVar2 = uVar2 & 0xf | 0x10;
  }
  uVar4 = change_data_rate(uVar2);
  set_rate_power_index(uVar2 & 0xff);
  iVar7 = 200;
  if ((3 < uVar2) && (iVar7 = 100, 7 < uVar2)) {
    iVar7 = 0x28;
  }
  iVar5 = 600;
  if (0x13 < uVar4) {
    iVar5 = 200;
  }
  if (param_2 < 4) {
    __floatunsisf((iVar5 - iVar7) * uVar4 >> 3);
    __mulsf3(uVar9);
    iVar7 = __fixunssfsi();
  }
  else {
    __floatsisf(param_1[3]);
    iVar7 = __fixunssfsi();
    if (param_2 != 4) {
      __floatsisf(param_1[4]);
      goto _L48;
    }
  }
  if (uVar4 < 0x14) {
    uVar6 = 0x44960000;
  }
  else {
    uVar6 = 0x43c80000;
  }
  __mulsf3(uVar9,uVar6);
_L48:
  uVar9 = __fixunssfsi();
  rftest_set_chan(uVar3 & 0xffff,(uint)(tx_cbw40m_en != '\0') << 1);
  target_power_backoff(iVar10);
  phy_printf("Wifi tx out: channel=%d, rate=0x%x, BK=%d, length=%d, delay=%d\n",uVar3,param_1[1],
             iVar10,iVar7,uVar9);
  FillTxPacket(iVar7 + 0xa0000,iVar7,0,uVar2,0,iVar1 << 0x1c,1,2);
  if (phy_tx_pwr_track_en != '\0') {
    phy_cal_param_track(0,phy_tx_pwr_print_en);
  }
  WifiTxStart_org(uVar2 + 0xa0000,uVar8,uVar9,tx_cbw40m_en,0,1);
  phy_printf("Tx Over 0x%x\n",_DAT_600a4c74 & 0xff);
  _DAT_600a0410 = _DAT_600a0410 & 0xff7fffff;
  return;
}

