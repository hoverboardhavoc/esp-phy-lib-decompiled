/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_testmode_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_testmode_tx(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  bt_tx_num = 0;
  prbs9_gen(&PRBS9);
  rw_le_v9_em_clean(0x3fcd0000,0x400);
  rw_v9_init_em_radio_table();
  rw_le_v9_prep_et(0x3fcd0100,0xf,0,0,0,0,0,0);
  rw_le_v9_set_etptr(0x3fcd0100);
  rw_le_v9_set_currentrxdescptr(&DAT_3fcd02c0);
  rf_rw_v9_le_enable();
  _DAT_600310d0 = _DAT_600310d0 & 0xffffefff;
  rw_le_v9_prep_cs(&DAT_3fcd0200,0x1c,1,1,1,0,1,0);
  rw_le_v9_init_rx_descryptor(&DAT_3fcd02c0,&DAT_3fcd02e0,0x3fcd0b00,0x3fcd0700);
  rw_le_v9_init_rx_descryptor(&DAT_3fcd02e0,&DAT_3fcd02c0,0x3fcd0f00,0x3fcd1300);
  if (param_2 == 2) {
    param_2 = 0;
  }
  else if (param_2 == 0) {
    param_2 = 2;
  }
  _DAT_3fcd0320 = (param_2 & 0xf) << 0x10 | param_1 << 0x18;
  _DAT_3fcd0300 = _DAT_3fcd0320 | 800;
  _DAT_3fcd0320 = _DAT_3fcd0320 | 0x300;
  _DAT_3fcd0304 = 0x340;
  _DAT_3fcd0324 = 0x340;
  _DAT_60031018 = _DAT_60031018 | 0x20;
  _DAT_600310d0 = _DAT_600310d0 | 0x800;
  iVar1 = rw_le_v9_get_clkn();
  rw_le_v9_set_rawstp_et(0x3fcd0100,iVar1 + 2U & 0xffffffe);
  rw_le_v9_kick_start(0);
  rw_le_v9_wait_4_kick_start();
  do {
    rw_le_v9_error_print();
    rw_le_v9_evt_refresh(0x3fcd0100,1);
    rw_evtv9_schdl_fsm_print();
    rw_evtv9_mgmt_fsm_print();
    rw_cca_fifo_print();
    iVar1 = ble_pll_track_refesh();
    rw_bb_tx_refesh();
    if ((iVar1 != 0) || (iVar1 = GetStopCmd(), iVar1 == 0)) break;
  } while ((param_3 == 0) || (bt_tx_num < param_3));
  _DAT_60031000 = _DAT_60031000 | 0x4000000;
  do {
  } while ((_DAT_60031014 & 0x20) == 0);
  _DAT_60031018 = _DAT_60031018 | 0x20;
  phy_printf("rw done! %x\n",_DAT_600310d4);
  rf_rw_v9_le_disable();
  return;
}

