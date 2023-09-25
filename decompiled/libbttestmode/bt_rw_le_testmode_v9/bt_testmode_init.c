/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
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
  phy_printf("LE autotest version: %s, %s, %s\n","9138a4c","Sep  5 2023","11:09:53");
  return;
}

