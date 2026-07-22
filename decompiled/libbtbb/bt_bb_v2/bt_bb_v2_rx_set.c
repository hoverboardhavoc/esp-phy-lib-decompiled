/*
 * Last changed at upstream commit 5695f4f38108658bc4a33e4712c1ebcb34911434
 * https://github.com/espressif/esp-phy-lib/commit/5695f4f38108658bc4a33e4712c1ebcb34911434
 * Upstream date: 2026-07-22 11:10:34 +0800
 * Upstream subject: update s31,C6 for track
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
  bt_set_rx_comp(6);
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
  _DAT_20102864 = 0x404;
  _DAT_20102858 = 0xa1b272e;
  _DAT_2010285c = 0xa1b272e;
  _DAT_2010284c = _DAT_2010284c & 0xfff80000 | 0xd5081770;
  _DAT_20102820 = _DAT_20102820 & 0xfffffff7;
  _DAT_20102888 = _DAT_20102888 | 0x40000000;
  return;
}

