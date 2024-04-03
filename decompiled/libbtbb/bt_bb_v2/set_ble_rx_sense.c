/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: libbtbb -> bt_bb_v2.o -> set_ble_rx_sense
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_ble_rx_sense(int param_1,uint param_2)

{
  if (param_1 != 0) {
    _DAT_600468a0 = (param_2 & 0xff) << 0x10 | _DAT_600468a0 & 0xff00ffff;
    _DAT_600468ac = (param_2 & 0xff) << 0x17 | _DAT_600468ac & 0x807fffff;
    _DAT_600468b8 = (param_2 & 0xff) << 0xc | _DAT_600468b8 & 0xfff00fff;
    return;
  }
  bt_agc_rssi_thresh();
  return;
}

