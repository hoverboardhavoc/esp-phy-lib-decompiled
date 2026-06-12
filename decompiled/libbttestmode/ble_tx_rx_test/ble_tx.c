/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
           undefined4 param_6,undefined4 param_7,uint param_8)

{
  int iVar1;
  char in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 uStack_38;
  undefined4 auStack_34 [4];
  
  uStack_38 = 0;
  auStack_34[0] = 0;
  if (param_5 != 2) {
    phy_test_filter_band_set(1);
  }
  rfpll_cal_track_set();
  ble_tx_init(param_2,param_5,param_6,param_4,param_3);
  if (param_8 < 100) {
    param_8 = 100;
  }
  while( true ) {
    if (in_stack_00000000 != '\0') {
      _DAT_20101508 = (uint)(byte)(&ch_map2)[_DAT_2010d800 % 0x28];
      _DAT_20101554 = _DAT_2010d800 % 0x28 | 0x40;
    }
    iVar1 = ble_tx_a_frame(param_1,param_7,in_stack_00000004,&uStack_38,auStack_34);
    if (iVar1 == 0) break;
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
  if (param_5 != 2) {
    phy_test_filter_band_set(0);
  }
  return;
}

