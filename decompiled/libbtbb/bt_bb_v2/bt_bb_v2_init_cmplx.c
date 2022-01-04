/*
 * Last changed at upstream commit 4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * https://github.com/espressif/esp-phy-lib/commit/4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * Upstream date: 2022-01-04 15:41:20 +0800
 * Upstream subject: fix the bug that phy libs still have ets_printf
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
  bt_bb_v2_rx_set(3);
  _DAT_600060fc = _DAT_600060fc & 0xffff00ff | 0xc800;
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfdffffff;
  if (param_1 == 0) {
    return;
  }
  rtc_printf("libbtbb version: %s, %s, %s\n","0f130a5","Sep 18 2021","20:17:16");
  return;
}

