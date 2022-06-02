/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_init_cmplx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_init_cmplx(int param_1)

{
  _DAT_6000e0c4 = _DAT_6000e0c4 | 0x2000000;
  bt_bb_v2_tx_set(0);
  bt_bb_v2_rx_set(4);
  _DAT_600060fc = _DAT_600060fc & 0xffff00ff | 0xc800;
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfdffffff;
  if (param_1 == 0) {
    return;
  }
  rtc_printf("libbtbb version: %s, %s, %s\n","ef0aae3","Jun  2 2022","16:28:19");
  return;
}

