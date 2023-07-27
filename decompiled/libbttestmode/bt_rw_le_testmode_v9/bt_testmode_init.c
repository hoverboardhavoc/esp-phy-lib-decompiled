/*
 * Last changed at upstream commit 7bdaf7da843d762451b59947318cd2c6cf733855
 * https://github.com/espressif/esp-phy-lib/commit/7bdaf7da843d762451b59947318cd2c6cf733855
 * Upstream date: 2023-07-27 11:33:55 +0800
 * Upstream subject: fix c3 ble tx bug
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
  phy_printf("LE autotest version: %s, %s, %s\n","9138a4c","Jul 27 2023","10:43:42");
  return;
}

