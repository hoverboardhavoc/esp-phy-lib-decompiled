/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_rx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_rx_set(void)

{
  bt_bb_rx_set();
  bt_set_rx_comp(0xffffffee,0,0xfffffffc,0xfffffffc,0xfffffffc);
  bt_agc_gain_set();
  bt_agc_rssi_thresh();
  bt_agc_target_set();
  bt_agc_restart_set();
  bt_agc_recorrect_set();
  bt_agc_detect_set();
  bt_bb_rx_correlator_set();
  bt_bb_rx_dpo_set();
  bt_bb_rx_filter_sel();
  zb_rx_core_set();
  zb_rx_v0_0_set();
  _DAT_600a2c48 = _DAT_600a2c48 & 0x403fffff | 0x28400000;
  return;
}

