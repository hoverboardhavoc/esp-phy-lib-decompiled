/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_rx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_rx_set(uint param_1)

{
  _DAT_60011050 = _DAT_60011050 & 0xfffff800;
  _DAT_60011008 = (param_1 & 0x3f) << 0x17 | _DAT_60011008 & 0xe07fffff;
  _DAT_6001100c = _DAT_6001100c & 0xfff | 0x4000000;
  _DAT_60033c18 = _DAT_60033c18 & 0x7fffffff;
  _DAT_6001104c = _DAT_6001104c | 4;
  _DAT_60011888 = _DAT_60011888 | 0x20040000;
  _DAT_6001184c = _DAT_6001184c & 0xfbffffff;
  _DAT_6001188c = _DAT_6001188c & 0xdfffffff;
  _DAT_60011054 = _DAT_60011054 & 0xffffffe0 | 0x14;
  _DAT_60011c00 = _DAT_60011c00 & 0xfff | 0x4000000;
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
  _DAT_60011c0c = _DAT_60011c0c & 0xffe003ff | 0x1cc000;
  _DAT_60011c18 = _DAT_60011c18 & 0xfffff800 | 0x730;
  _DAT_60011c10 = _DAT_60011c10 & 0x1fff | 0xe613c000;
  _DAT_60011c34 = _DAT_60011c34 & 0x800001ff | 0xfa5fae00;
  _DAT_60011c2c = _DAT_60011c2c & 0xff | 128000000;
  _DAT_60011c30 = _DAT_60011c30 & 0xff | 0xf85edf00;
  return;
}

