/*
 * Last changed at upstream commit e5944fc80c813150131566dd0761709ae9fdea89
 * https://github.com/espressif/esp-phy-lib/commit/e5944fc80c813150131566dd0761709ae9fdea89
 * Upstream date: 2025-02-18 15:55:42 +0800
 * Upstream subject: update libphy for RXDC cal opt, no antenna current opt, add cca api
 * Source: libbtbb -> bt_bb_v2.o -> set_ble_rx_sense
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_ble_rx_sense(int param_1,uint param_2,int param_3)

{
  if (param_1 == 0) {
    bt_bb_v2_rx_rssi_thresh(0xffffff9c,0xffffff92);
    return;
  }
  if (param_2 < 2) {
    _DAT_6001c07c = _DAT_6001c07c & 0xff00ffff | param_3 << 0x10;
    _DAT_600118a0 = param_3 << 0x10 | _DAT_600118a0 & 0xff00ffff;
    return;
  }
  if ((param_2 - 2 & 0xff) < 2) {
    _DAT_6001c1a0 = _DAT_6001c1a0 & 0xe01fffff | param_3 << 0x15;
    _DAT_600118ac = param_3 << 0x17 | _DAT_600118ac & 0x807fffff;
    return;
  }
  return;
}

