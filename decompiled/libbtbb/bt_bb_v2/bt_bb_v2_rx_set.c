/*
 * Last changed at upstream commit 1e3487dc778d48c15229af05ce0f03f78e15528c
 * https://github.com/espressif/esp-phy-lib/commit/1e3487dc778d48c15229af05ce0f03f78e15528c
 * Upstream date: 2025-01-03 11:45:24 +0800
 * Upstream subject: support h2 eco5 test
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
  bt_set_rx_comp(5,0,0xfffffffc,0xfffffffc,0xfffffffc);
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
  zb_rx_auto_sel();
  if (phy_param < 5) {
    return;
  }
  _DAT_600a2c0c = _DAT_600a2c0c & 0xffe003ff | 0x1e6c00;
  _DAT_600a2020 = _DAT_600a2020 & 0xfffffff3 | 0x10;
  _DAT_600a2844 = _DAT_600a2844 & 0xe0000000 | 0x108285;
  return;
}

