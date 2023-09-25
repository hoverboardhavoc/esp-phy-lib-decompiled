/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> bt_pll_track_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_pll_track_start(void)

{
  _DAT_60011084 = _DAT_60011084 | 0x20800;
  interrupt_set_wrapper(0,5,4,1);
  interrupt_handler_set_wrapper(4,bt_pll_track_debug,0);
  interrupt_on_wrapper(4);
  return;
}

