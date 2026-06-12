/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> bt_testmode_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_testmode_init(void)

{
  _DAT_2010f01c = _DAT_2010f01c | 0xf;
  _DAT_20109c04 = 0xffffffff;
  _DAT_20109c14 = 0xffffffff;
  _DAT_20109c0c = 0xffffffff;
  _DAT_2010f018 = 0xffffffff;
  _DAT_20109c10 = 0;
  bt_bb_v2_init_cmplx(1);
  bt_bb_tx_cca_set(0,0xd8,1,3,0,0,0,0);
  bt_bb_corr_thresh_aa_lc_en(0);
  bt_lc_tx_on_delay(0x3c);
  ieee802154_mac_init();
  ieee802154_txon_delay_set();
  btlc_reg_init(0x2f000000);
  _DAT_2010185c = _DAT_2010185c | 0x180000;
  phy_printf("\nRW V9 LE autotest! %s, %s\n","Jun 12 2026","18:28:22");
  return;
}

