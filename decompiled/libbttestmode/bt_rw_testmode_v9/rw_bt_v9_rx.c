/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_bt_v9_rx(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [12];
  
  if (param_1 == 1) {
_L183:
    uVar7 = 0x153;
  }
  else {
    if (param_1 == 2) {
      uVar7 = 0x2a7;
      uVar6 = 0xe;
      goto _L178;
    }
    if (param_1 != 3) goto _L183;
    uVar7 = 0x3fd;
  }
  uVar6 = 0xf;
_L178:
  phy_printf("RW V9 BT RX\n");
  prbs9_gen(&PRBS9);
  rf_rw_v9_bt_enable();
  rw_bt_v9_em_clean(0x3ffd0000,0x400);
  rw_v9_init_em_radio_table();
  rw_bt_v9_prep_et(0x3ffd0100,0xf,0,0,0,0,0,0);
  rw_bt_v9_set_etptr(0x3ffd0100);
  rw_bt_v9_set_currentrxdescptr(&DAT_3ffd02c0);
  _DAT_60031428 = _DAT_60031428 | 0x8000;
  rw_bch_gen(0x6bc6967e,auStack_38,auStack_34);
  rw_bt_v9_prep_cs(0x3ffd0200,3,0,1,1,1,0,0);
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
  rw_init_tx_descriptor(&DAT_3ffd0300,&DAT_3ffd0320,0,0,1,uVar6,2,uVar7);
  rw_init_tx_descriptor(&DAT_3ffd0320,&DAT_3ffd0300,0,0,1,uVar6,2,uVar7);
  _DAT_60031418 = _DAT_60031418 | 0x20;
  iVar3 = rw_bt_v9_get_clkn();
  rw_bt_v9_set_rawstp_et(0x3ffd0100,iVar3 + 2U & 0xfffffff);
  rw_bt_v9_kick_start(0);
  rw_bt_v9_wait_4_kick_start();
  phy_printf("start!\n");
  do {
    rw_bt_v9_error_print();
    rw_bt_v9_frm_refresh(0x3ffd0100,1);
    iVar3 = GetStopCmd();
  } while (iVar3 != 0);
  phy_printf("rw done!\n");
  rf_rw_v9_bt_disable();
  return;
}

