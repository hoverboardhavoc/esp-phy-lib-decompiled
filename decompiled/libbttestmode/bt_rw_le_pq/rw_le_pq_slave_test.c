/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_le_pq_slave_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_pq_slave_test(undefined4 param_1)

{
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [20];
  
  local_40 = 0;
  local_3c = 0;
  phy_printf("RW pq BLE Slave\n");
  rw_le_v9_em_clean(0x3fcd0000,0x400);
  prbs9_gen(&PRBS9);
  rw_v9_init_em_radio_table();
  rw_le_v9_prep_et(0x3fcd0100,0xf,0,0,0,0,0,0);
  rw_le_v9_set_etptr(0x3fcd0100);
  rw_le_v9_set_currentrxdescptr(&DAT_3fcd02c0);
  rf_rw_v9_le_enable();
  read_macaddr_from_otp(auStack_38);
  _DAT_60031120 = _DAT_60031120 & 0xffffc000 | 2000;
  _DAT_60031000 = _DAT_60031000 & 0xffffbfff;
  rw_le_v9_prep_cs(&DAT_3fcd0200,3,1,1,1,0,1,0);
  _DAT_3fcd0222 = 0xffff;
  _DAT_3fcd0224 = _DAT_3fcd0224 | 0x1fffff;
  rw_ble_con_txptr_init(param_1,&PRBS9,5,&PRBS9,5);
  rw_ble_rxptr_init();
  _DAT_60031018 = _DAT_60031018 | 0x20;
  _DAT_60031000 = _DAT_60031000 & 0xfff3ffff | 0x100000;
  iVar1 = rw_le_v9_get_clkn();
  rw_le_v9_set_rawstp_et(0x3fcd0100,iVar1 + 2U & 0xffffffe);
  rw_le_v9_kick_start(0);
  rw_le_v9_wait_4_kick_start();
  phy_printf("cons start!\n");
  ate_event_time = _DAT_60035000;
  do {
    rw_le_v9_error_print();
    rw_le_pq_cons_refresh(0x3fcd0100,&local_40,&local_3c);
    iVar1 = ble_pll_track_refesh();
    if (iVar1 != 0) break;
    iVar1 = GetStopCmd();
  } while (iVar1 != 0);
  rw_le_pq_wait_idle(0x3fcd0100);
  phy_printf("rw done!t%d r%d,%d\n",local_40,local_3c,ate_slave_time);
  rf_rw_v9_le_disable();
  return;
}

