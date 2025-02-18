/*
 * Last changed at upstream commit e5944fc80c813150131566dd0761709ae9fdea89
 * https://github.com/espressif/esp-phy-lib/commit/e5944fc80c813150131566dd0761709ae9fdea89
 * Upstream date: 2025-02-18 15:55:42 +0800
 * Upstream subject: update libphy for RXDC cal opt, no antenna current opt, add cca api
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> ble_chan_trans_to_normal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int ble_chan_trans_to_normal(uint param_1)

{
  if (param_1 != 0x25) {
    if (param_1 == 0x26) {
      return 0xc;
    }
    if (param_1 == 0x27) {
      return 0x27;
    }
    if (param_1 < 0xb) {
      return param_1 + 1;
    }
    if (param_1 < 0x25) {
      return param_1 + 2;
    }
  }
  return 0;
}

