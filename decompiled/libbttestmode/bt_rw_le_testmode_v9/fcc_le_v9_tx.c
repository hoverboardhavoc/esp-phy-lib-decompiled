/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> fcc_le_v9_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fcc_le_v9_tx(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 uint param_6)

{
  int iVar1;
  
  phy_printf("fcc_le_tx: txpwr=%d,chan=%d,len=%d,data_type=%d,rate=%d,tx_num=%d\n",param_1,param_2,
             param_3,param_4,param_5,param_6);
  bt_tx_num = 0;
  prbs9_gen(&PRBS9);
  rw_le_v9_em_clean(0x3fcd0000,0x400);
  rw_v9_init_em_radio_table();
  (**(code **)(_g_phyFuns + 0x114))(&phy_param,6,*(code **)(_g_phyFuns + 0x114));
  rw_le_v9_prep_et(0x3fcd0100,0xf,0,0,0,0,0,0);
  rw_le_v9_set_etptr(0x3fcd0100);
  rw_le_v9_set_currentrxdescptr(&DAT_3fcd02c0);
  rf_rw_v9_le_enable();
  _DAT_600310d0 = _DAT_600310d0 & 0xffffefff;
  rw_le_v9_prep_cs(&DAT_3fcd0200,0x1c,1,1,1,0,1,0);
  rw_le_v9_init_rx_descryptor(&DAT_3fcd02c0,&DAT_3fcd02e0,0x3fcd0b00,0x3fcd0700);
  rw_le_v9_init_rx_descryptor(&DAT_3fcd02e0,&DAT_3fcd02c0,0x3fcd0f00,0x3fcd1300);
  if (param_4 == 2) {
    param_4 = 0;
  }
  else if (param_4 == 0) {
    param_4 = 2;
  }
  _DAT_3fcd0320 = (param_4 & 0xf) << 0x10 | param_3 << 0x18;
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
  } while ((param_6 == 0) || (bt_tx_num < param_6));
  _DAT_60031000 = _DAT_60031000 | 0x4000000;
  do {
  } while ((_DAT_60031014 & 0x20) == 0);
  _DAT_60031018 = _DAT_60031018 | 0x20;
  phy_printf("TX done! %x\n",_DAT_600310d4);
  rf_rw_v9_le_disable();
  return;
}

