/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,undefined4 param_6,int param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  char in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 uStack_38;
  undefined4 auStack_34 [4];
  
  uStack_38 = 0;
  auStack_34[0] = 0;
  bt_track_pll_cap();
  chip_v7_set_chan(1,0);
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
      uVar1 = phy_time_now();
      _DAT_600a1508 = (uint)(byte)ch_map2[uVar1 % 0x28];
      _DAT_600a1554 = uVar1 % 0x28 | 0x40;
    }
    iVar2 = ble_tx_a_frame(param_1,param_7,in_stack_00000004,&uStack_38,auStack_34,param_6);
    if (iVar2 == 0) break;
    ets_delay_us(param_8 - 100 & 0xffff);
  }
  phy_printf("TX done %d %d %d %d %d %d %d %d\n",uStack_38,auStack_34[0],_n_cca_ind0,_n_cca_ind1,
             _n_cca_ind2,_cca_rssi_sum,(int)cca_rssi_max);
  cca_rssi_min = 0;
  _n_cca_ind0 = 0;
  _n_cca_ind1 = 0;
  _n_cca_ind2 = 0;
  _cca_rssi_sum = 0;
  cca_rssi_max = 0;
  return;
}

