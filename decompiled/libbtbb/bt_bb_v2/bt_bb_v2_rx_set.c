/*
 * Last changed at upstream commit ae6f29bfebbfdacc1bba905afff3399fe733245f
 * https://github.com/espressif/esp-phy-lib/commit/ae6f29bfebbfdacc1bba905afff3399fe733245f
 * Upstream date: 2026-05-21 14:11:41 +0800
 * Upstream subject: support wifi api and regdma
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
  bt_set_rx_comp(6,0,3,2,0,0);
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
  zb_rx_v0_0_set();
  _DAT_20102068 = _DAT_20102068 & 0xffffdfff;
  return;
}

