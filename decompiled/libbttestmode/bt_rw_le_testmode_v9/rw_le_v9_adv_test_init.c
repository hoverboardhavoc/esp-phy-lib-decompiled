/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_adv_test_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_adv_test_init(void)

{
  int iVar1;
  
  phy_printf("LE ADV\n");
  rw_le_v9_em_clean(0x3ffd0000,0x400);
  prbs9_gen(&PRBS9);
  rw_v9_init_em_radio_table();
  rw_le_v9_prep_et(0x3ffd0100,5,0,0,0,0,0,0);
  rw_le_v9_set_etptr(0x3ffd0100);
  rw_le_v9_set_currentrxdescptr(&DAT_3ffd02c0);
  rf_rw_v9_le_enable();
  rw_le_v9_adv_init(2000);
  rw_le_v9_init_rx_descryptor(&DAT_3ffd02c0,&DAT_3ffd02e0,0x3ffd0b00,0x3ffd0700);
  rw_le_v9_init_rx_descryptor(&DAT_3ffd02e0,&DAT_3ffd02c0,0x3ffd0f00,0x3ffd1300);
  _DAT_60031018 = _DAT_60031018 | 0x20;
  _DAT_3ffd0200 = _DAT_3ffd0200 | 0x400000;
  iVar1 = rw_le_v9_get_clkn();
  rw_le_v9_set_rawstp_et(0x3ffd0100,iVar1 + 2U & 0xffffffe);
  rw_le_v9_kick_start(0);
  rw_le_v9_wait_4_kick_start();
  phy_printf("start!\n");
  return;
}

