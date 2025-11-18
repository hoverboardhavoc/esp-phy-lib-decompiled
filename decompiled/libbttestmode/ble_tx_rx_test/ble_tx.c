/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
           ,undefined4 param_6,int param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  char in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 uStack_38;
  undefined4 auStack_34 [2];
  
  uStack_38 = 0;
  auStack_34[0] = 0;
  if ((param_2 - 0x938 & 0xffff) < 0x29) {
    if (0x94c < _phy_param) {
      phy_set_chan_freq_base(0x938);
    }
    _DAT_600c13f4 = _DAT_600c13f4 & 0xffffffbf;
    _DAT_600c1508 = _DAT_600c1508 & 0xfffffcff | 0x100;
    param_2 = ble_freq_trans_chan_2360(param_2);
    dis_tx_scale = 1;
  }
  else {
    if (_phy_param < 0x94c) {
      phy_set_chan_freq_base(0x962);
    }
    _DAT_600c13f4 = _DAT_600c13f4 & 0xffffffbf;
    _DAT_600c1508 = _DAT_600c1508 & 0xfffffcff | 0x100;
    dis_tx_scale = 0;
  }
  bt_track_pll_cap();
  ble_tx_scale_set(param_2 & 0xff,param_4,param_5);
  ble_tx_init(param_2 & 0xff,param_5,param_6,param_4,param_3);
  if (param_8 < 100) {
    param_8 = 100;
  }
  if (param_7 != 0) {
    i2c_writeReg_Mask(0x62,1,6,3,3,1);
  }
  while( true ) {
    if (in_stack_00000000 != '\0') {
      uVar1 = phy_time_now();
      _DAT_600c1508 = (uint)(byte)ch_map2[uVar1 % 0x28];
      _DAT_600c1554 = uVar1 % 0x28 | 0x40;
    }
    iVar2 = ble_tx_a_frame(param_1,param_7,in_stack_00000004,&uStack_38,auStack_34,param_6);
    if (iVar2 == 0) break;
    if (test_hoop_enable != '\0') {
      freq_hoop_random();
    }
    ets_delay_us(param_8 - 100 & 0xffff);
  }
  phy_printf("TX done %d %d %d %d %d %d %d %d\n",uStack_38,auStack_34[0],_n_cca_ind0,_n_cca_ind1,
             _n_cca_ind2,_cca_rssi_sum,(int)cca_rssi_max);
  _n_cca_ind0 = 0;
  _n_cca_ind1 = 0;
  _n_cca_ind2 = 0;
  _cca_rssi_sum = 0;
  cca_rssi_max = 0;
  cca_rssi_min = 0;
  if (param_7 != 0) {
    i2c_writeReg_Mask(0x62,1,6,3,3,0);
  }
  return;
}

