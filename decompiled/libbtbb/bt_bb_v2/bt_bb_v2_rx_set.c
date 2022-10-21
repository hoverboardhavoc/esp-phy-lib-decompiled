/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_rx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_rx_set(uint param_1)

{
  _DAT_60026010 = _DAT_60026010 | 0xf000f;
  _DAT_60011008 = (param_1 & 0x3f) << 0x17 | _DAT_60011008 & 0xe07fffff;
  bt_bb_corr_set();
  bt_bb_dpo_set();
  bt_bb_restart_set();
  bt_bb_target_set();
  bt_bb_detect_set();
  bt_bb_gain_set();
  bt_bb_v2_rx_rssi_thresh(0xffffff9c,0xffffff92);
  bt_bb_v2_recorrect();
  _DAT_60033c18 = _DAT_60033c18 & 0x7fffffff;
  _DAT_60011888 = _DAT_60011888 & 0xdffbffff;
  _DAT_600118a0 = _DAT_600118a0 & 0xcfffff00 | 0x2000000a;
  return;
}

