/*
 * Last changed at upstream commit e3222517e339e9301dd7f432fa3e052cf44d325f
 * https://github.com/espressif/esp-phy-lib/commit/e3222517e339e9301dd7f432fa3e052cf44d325f
 * Upstream date: 2023-11-22 19:43:16 +0800
 * Upstream subject: fix c2 rx bug when phy_init_param_set(0)
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_rx_set_1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_rx_set_1(void)

{
  bt_bb_rx_set1();
  _DAT_60046844 = 0xe00000;
  bt_agc_gain_offset(0x50);
  bt_agc_gain_set();
  bt_agc_rssi_thresh();
  bt_agc_target_set_1();
  bt_agc_restart_set_1();
  bt_agc_recorrect_set();
  bt_agc_detect_set();
  bt_bb_rx_correlator_set();
  bt_bb_rx_dpo_set();
  bt_bb_rx_filter_sel();
  _DAT_6004684c = _DAT_6004684c & 0xf7ffffff;
  _DAT_60046020 = _DAT_60046020 & 0xffffc3ff | 0x1800;
  return;
}

