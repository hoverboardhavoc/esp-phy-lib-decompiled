/*
 * Last changed at upstream commit cb8e32f9415a731981c50c3f9586f52b8ed8e26c
 * https://github.com/espressif/esp-phy-lib/commit/cb8e32f9415a731981c50c3f9586f52b8ed8e26c
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix C2 BLE CCA bug
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
  bt_agc_target_set();
  bt_agc_restart_set();
  bt_agc_recorrect_set();
  bt_agc_detect_set();
  bt_bb_rx_correlator_set();
  bt_bb_rx_dpo_set();
  bt_bb_rx_filter_sel();
  _DAT_6004684c = _DAT_6004684c & 0xf7ffffff;
  _DAT_600468a4 = _DAT_600468a4 & 0xffe07fff | 0x38000;
  _DAT_60046020 = _DAT_60046020 & 0xffffc3ff | 0x1800;
  _DAT_600468bc = _DAT_600468bc & 0xfffffebf;
  return;
}

