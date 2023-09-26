/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar1 = _short_gi_enable;
  uVar6 = param_1[1];
  uVar10 = *param_1;
  iVar7 = 0;
  if (2 < param_2) {
    iVar7 = (int)(char)param_1[2];
  }
  uVar9 = 0;
  if (5 < param_2) {
    uVar9 = param_1[5];
  }
  if (_phy_11ax_array == 0) {
    uVar8 = 0x3f800000;
  }
  else {
    uVar8 = 0x400ccccd;
  }
  seed_vs_rate(uVar6 & 0xff);
  if (0x1f < uVar6) {
    uVar6 = uVar6 & 0xf | 0x10;
  }
  uVar2 = change_data_rate(uVar6);
  set_rate_power_index(uVar6 & 0xff);
  iVar5 = 200;
  if ((3 < uVar6) && (iVar5 = 100, 7 < uVar6)) {
    iVar5 = 0x28;
  }
  iVar3 = 600;
  if (0x13 < uVar2) {
    iVar3 = 200;
  }
  if (param_2 < 4) {
    __floatunsisf((iVar3 - iVar5) * uVar2 >> 3);
    __mulsf3(uVar8);
    iVar5 = __fixunssfsi();
  }
  else {
    __floatsisf(param_1[3]);
    iVar5 = __fixunssfsi();
    if (param_2 != 4) {
      __floatsisf(param_1[4]);
      goto _L48;
    }
  }
  if (uVar2 < 0x14) {
    uVar4 = 0x44960000;
  }
  else {
    uVar4 = 0x43c80000;
  }
  __mulsf3(uVar8,uVar4);
_L48:
  uVar8 = __fixunssfsi();
  rftest_set_chan(uVar10 & 0xffff,(uint)(tx_cbw40m_en != '\0') << 1);
  target_power_backoff(iVar7);
  phy_printf("Wifi tx out: channel=%d, rate=0x%x, BK=%d, length=%d, delay=%d\n",uVar10,param_1[1],
             iVar7,iVar5,uVar8);
  FillTxPacket(iVar5 + 0xa0000,iVar5,0,uVar6,0,iVar1 << 0x1c,1,2);
  if (phy_tx_pwr_track_en != '\0') {
    phy_cal_param_track(0,phy_tx_pwr_print_en);
  }
  WifiTxStart_org(uVar6 + 0xa0000,uVar9,uVar8,tx_cbw40m_en,0,1);
  phy_printf("Tx Over 0x%x\n",_DAT_600a4c74 & 0xff);
  _DAT_600a0410 = _DAT_600a0410 & 0xff7fffff;
  return;
}

