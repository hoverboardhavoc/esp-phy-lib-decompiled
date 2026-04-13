/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_testmode_tx_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_testmode_tx_init(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  phy_printf("RW V9 LE TM TX\n");
  prbs9_gen(&PRBS9);
  rw_le_v9_em_clean(0x3ffd0000,0x400);
  rw_v9_init_em_radio_table();
  rw_le_v9_prep_et(0x3ffd0100,0xf,0,0,0,0,0,0);
  rw_le_v9_set_etptr(0x3ffd0100);
  rw_le_v9_set_currentrxdescptr(&DAT_3ffd02c0);
  rf_rw_v9_le_enable();
  _DAT_600310d0 = _DAT_600310d0 & 0xffffefff;
  rw_le_v9_prep_cs(&DAT_3ffd0200,0x1c,0,1,1,0,1,0);
  rw_le_v9_init_rx_descryptor(&DAT_3ffd02c0,&DAT_3ffd02e0,0x3ffd0b00,0x3ffd0700);
  rw_le_v9_init_rx_descryptor(&DAT_3ffd02e0,&DAT_3ffd02c0,0x3ffd0f00,0x3ffd1300);
  puVar4 = (undefined4 *)&DAT_3ffd0340;
  if (param_2 == 0) {
    puVar3 = (undefined4 *)&PRBS9;
    do {
      uVar2 = *puVar3;
      puVar5 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar4 = uVar2;
      puVar4 = puVar5;
    } while (puVar5 != (undefined4 *)0x3ffd0744);
  }
  else if (param_2 == 2) {
    do {
      *puVar4 = 0xaaaaaaaa;
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined4 *)0x3ffd0744);
  }
  else {
    do {
      *puVar4 = 0xf0f0f0f0;
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined4 *)0x3ffd0744);
  }
  _DAT_3ffd0320 = (param_2 & 0xf) << 0x10 | param_1 << 0x18;
  _DAT_3ffd0300 = _DAT_3ffd0320 | 800;
  _DAT_3ffd0320 = _DAT_3ffd0320 | 0x300;
  _DAT_3ffd0304 = 0x340;
  _DAT_3ffd0324 = 0x340;
  _DAT_60031018 = _DAT_60031018 | 0x20;
  iVar1 = rw_le_v9_get_clkn();
  rw_le_v9_set_rawstp_et(0x3ffd0100,iVar1 + 2U & 0xffffffe);
  rw_le_v9_kick_start(0);
  do {
  } while (_DAT_60031100 < 0);
  return;
}

