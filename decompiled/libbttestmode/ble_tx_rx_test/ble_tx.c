/*
 * Last changed at upstream commit 1e3487dc778d48c15229af05ce0f03f78e15528c
 * https://github.com/espressif/esp-phy-lib/commit/1e3487dc778d48c15229af05ce0f03f78e15528c
 * Upstream date: 2025-01-03 11:45:24 +0800
 * Upstream subject: support h2 eco5 test
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
  int iVar1;
  char in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 uStack_38;
  undefined4 auStack_34 [3];
  
  uStack_38 = 0;
  auStack_34[0] = 0;
  bt_track_pll_cap();
  chip_v7_set_chan(1,0);
  xtal_freq_rx_cal(1,(byte)(&ch_map2)[param_2] + 2,0);
  ble_radio_init();
  ble_tx_init(param_2,param_5,param_6,param_4,param_3);
  if (param_8 < 100) {
    param_8 = 100;
  }
  if (param_7 != 0) {
    bt_track_pll_cap();
  }
  set_pbus_mem_update(param_6);
  while( true ) {
    if (in_stack_00000000 != '\0') {
      param_2 = phy_time_now();
      param_2 = param_2 % 0x28;
      _DAT_600a1508 = (uint)(byte)(&ch_map2)[param_2];
      _DAT_600a1554 = param_2 | 0x40;
    }
    iVar1 = ble_tx_a_frame(param_1,param_7,in_stack_00000004,&uStack_38,auStack_34,param_6);
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
  xtal_freq_rx_cal(0,(byte)(&ch_map2)[param_2] + 2,0);
  return;
}

