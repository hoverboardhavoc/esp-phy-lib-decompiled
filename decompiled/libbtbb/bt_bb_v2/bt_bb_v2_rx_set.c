/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
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
  bt_set_rx_comp(0xffffffe4,0xfffffffe,0xfffffffe,0,0);
  bt_agc_gain_set();
  bt_agc_rssi_thresh();
  bt_agc_target_set();
  bt_agc_restart_set();
  bt_agc_recorrect_set();
  bt_agc_detect_set();
  bt_bb_rx_correlator_set();
  bt_bb_rx_dpo_set();
  bt_bb_rx_filter_sel();
  _DAT_600c2c0c = _DAT_600c2c0c & 0xffe003ff | 0x1e7000;
  _DAT_600c2c18 = _DAT_600c2c18 & 0xfffff800 | 0x7a6;
  _DAT_600c2c10 = _DAT_600c2c10 & 0x1fff | 0xf254c000;
  _DAT_600c2c30 = _DAT_600c2c30 & 0xff | 0xf85edf00;
  _DAT_600c2c14 = _DAT_600c2c14 & 0xfffffffd;
  _DAT_600c2c28 = _DAT_600c2c28 | 0x40000000;
  _DAT_600c2c2c = 0x7a120f6;
  _DAT_600c2c34 = _DAT_600c2c34 & 0x800001ff | 0x7e1fda01;
  return;
}

