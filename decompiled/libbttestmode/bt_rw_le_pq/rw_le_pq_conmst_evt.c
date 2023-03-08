/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_le_pq_conmst_evt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_pq_conmst_evt(int param_1)

{
  int iVar1;
  int local_58;
  undefined4 local_54;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [28];
  
  local_58 = 0;
  local_54 = 0;
  phy_printf("RW pq BLE CONM\n");
  rw_le_v9_em_clean(0x3fcd0000,0x400);
  prbs9_gen(&PRBS9);
  rw_v9_init_em_radio_table();
  rw_le_v9_prep_et(0x3fcd0100,0xf,0,0,0,0,0,0);
  rw_le_v9_set_etptr(0x3fcd0100);
  rw_le_v9_set_currentrxdescptr(&DAT_3fcd02c0);
  rf_rw_v9_le_enable();
  _DAT_3fcd0200 = _DAT_3fcd0200 | 0x400000;
  read_macaddr_from_otp(auStack_50);
  _DAT_60031120 = _DAT_60031120 & 0xffffc000 | 2000;
  _DAT_60031000 = _DAT_60031000 & 0xffffbfff;
  rw_le_v9_prep_cs(&DAT_3fcd0200,2,1,1,1,0,1,0);
  _DAT_3fcd0222 = 0xffff;
  _DAT_3fcd0224 = _DAT_3fcd0224 | 0x1fffff;
  memcpy(auStack_48,&_LANCHOR5,0x18);
  rw_ble_con_txptr_init(0x14,auStack_48,6,&PRBS9,5);
  rw_ble_rxptr_init();
  _DAT_60031018 = _DAT_60031018 | 0x20;
  _DAT_3fcd0200 = _DAT_3fcd0200 | 0x400000;
  _DAT_60031000 = _DAT_60031000 & 0xfff3ffff | 0x100000;
  iVar1 = rw_le_v9_get_clkn();
  rw_le_v9_set_rawstp_et(0x3fcd0100,iVar1 + 2U & 0xffffffe);
  rw_le_v9_kick_start(0);
  rw_le_v9_wait_4_kick_start();
  if ((int)(_DAT_3fcd0300 << 0x10) < 0) {
    local_58 = local_58 + 1;
    _DAT_3fcd0300 = _DAT_3fcd0300 & 0xffff7fff;
  }
  phy_printf("conm start!\n");
  while( true ) {
    if ((int)(_DAT_3fcd0300 << 0x10) < 0) {
      local_58 = local_58 + 1;
      _DAT_3fcd0300 = _DAT_3fcd0300 & 0xffff7fff;
    }
    if ((int)(_DAT_3fcd0320 << 0x10) < 0) {
      local_58 = local_58 + 1;
      _DAT_3fcd0320 = _DAT_3fcd0320 & 0xffff7fff;
    }
    rw_le_v9_error_print();
    rw_le_pq_conm_refresh(0x3fcd0100,&local_58,&local_54);
    if (local_58 == param_1) break;
    iVar1 = GetStopCmd();
    if (iVar1 == 0) {
      phy_printf("rw done!\n");
      rf_rw_v9_le_disable();
      return;
    }
  }
  rf_rw_v9_le_disable();
  phy_printf("done:t%d r%d\n",local_58,local_54);
  return;
}

