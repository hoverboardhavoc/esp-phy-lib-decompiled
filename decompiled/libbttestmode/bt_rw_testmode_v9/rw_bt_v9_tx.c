/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_bt_v9_tx(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  phy_printf("RW V9 BT TX\n");
  prbs9_gen(&PRBS9);
  rf_rw_v9_bt_enable();
  rw_bt_v9_em_clean(0x3ffd0000,0x400);
  rw_v9_init_em_radio_table();
  rw_bt_v9_prep_et(0x3ffd0100,0xf,0,0,0,0,0,0);
  rw_bt_v9_set_etptr(0x3ffd0100);
  rw_bt_v9_set_currentrxdescptr(&DAT_3ffd02c0);
  rw_bch_gen(0x6bc6967e,auStack_28,auStack_24);
  rw_bt_v9_prep_cs(0x3ffd0200,2,0,1,1,1,0,0);
  rw_bt_v9_init_rx_descryptor(&DAT_3ffd02c0,&DAT_3ffd02e0,0x3ffd0b00,0x3ffd0700);
  rw_bt_v9_init_rx_descryptor(&DAT_3ffd02e0,&DAT_3ffd02c0,0x3ffd0f00,0x3ffd1300);
  puVar5 = (undefined4 *)&PRBS9;
  puVar1 = (undefined4 *)&DAT_3ffd0340;
  do {
    uVar4 = *puVar5;
    puVar2 = puVar1 + 1;
    puVar5 = puVar5 + 1;
    *puVar1 = uVar4;
    puVar1 = puVar2;
  } while (puVar2 != (undefined4 *)0x3ffd0744);
  _DAT_3ffd0300 = 0xf20320;
  _DAT_3ffd0304 = 0x340153e;
  _DAT_3ffd0308 = _DAT_3ffd0308 & 0xffff0000 | 0x700;
  _DAT_3ffd0320 = 0xf20300;
  _DAT_3ffd0324 = 0x340153e;
  _DAT_3ffd0328 = _DAT_3ffd0328 & 0xffff0000 | 0x700;
  _DAT_60031418 = _DAT_60031418 | 0x20;
  iVar3 = rw_bt_v9_get_clkn();
  rw_bt_v9_set_rawstp_et(0x3ffd0100,iVar3 + 2U & 0xffffffe);
  rw_bt_v9_kick_start(0);
  rw_bt_v9_wait_4_kick_start();
  phy_printf("start!\n");
  do {
    rw_bt_v9_error_print();
    rw_bt_v9_frm_refresh(0x3ffd0100,1);
    rw_frmv9_schdl_fsm_print();
    rw_frmv9_mgmt_fsm_print();
    rw_frmv9_pktc_fsm_print();
    iVar3 = GetStopCmd();
  } while (iVar3 != 0);
  phy_printf("rw done!\n");
  rf_rw_v9_bt_disable();
  return;
}

