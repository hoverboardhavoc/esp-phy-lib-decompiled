/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_rx_per_syncw_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_rx_per_syncw_init(void)

{
  int iVar1;
  
  rw_le_v9_em_clean(0x3fcd0000,0x400);
  rw_v9_init_em_radio_table();
  rw_le_v9_prep_et(0x3fcd0100,0xf,0,0,0,0,0,0);
  rw_le_v9_set_etptr(0x3fcd0100);
  rw_le_v9_set_currentrxdescptr(&DAT_3fcd02c0);
  rf_rw_v9_le_enable();
  _DAT_600310d0 = _DAT_600310d0 | 0x8000000;
  rw_le_v9_prep_cs(&DAT_3fcd0200,0x1d,1,0,0,0,1,0);
  _DAT_3fcd0200 = _DAT_3fcd0200 | 0x400000;
  rw_le_v9_init_rx_descryptor(&DAT_3fcd02c0,&DAT_3fcd02e0,0x3fcd0b00,0x3fcd0700);
  rw_le_v9_init_rx_descryptor(&DAT_3fcd02e0,&DAT_3fcd02c0,0x3fcd0f00,0x3fcd1300);
  _DAT_3fcd0300 = 0xfa010320;
  _DAT_3fcd0304 = 0x340;
  _DAT_3fcd0320 = 0xfa010300;
  _DAT_3fcd0324 = 0x340;
  _DAT_60031018 = _DAT_60031018 | 0x20;
  iVar1 = rw_le_v9_get_clkn();
  rw_le_v9_set_rawstp_et(0x3fcd0100,iVar1 + 2U & 0xffffffe);
  rw_le_v9_kick_start(0);
  do {
  } while (_DAT_60031100 < 0);
  return;
}

