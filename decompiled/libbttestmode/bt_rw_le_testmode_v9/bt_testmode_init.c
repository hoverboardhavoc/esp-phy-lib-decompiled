/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> bt_testmode_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_testmode_init(void)

{
  _DAT_60026014 = 0xffffffff;
  _DAT_60026018 = 0;
  _DAT_600c0010 = _DAT_600c0010 | 0xa000;
  coex_pti_v2();
  force_coex_timer0_wifi_v2();
  force_coex_timer0_wifi_pti_v2(0);
  bt_bb_v2_init_cmplx(1);
  bt_bb_tx_cca_set(0,0xd8,1,3,0,0,0,0);
  rf_rw_v9_le_init();
  phy_printf("LE autotest version: %s, %s, %s\n","df36921","May 10 2023","17:44:32");
  return;
}

