/*
 * Last changed at upstream commit 603b69583635ffcedf2a5e1d0f70da77edf82d10
 * https://github.com/espressif/esp-phy-lib/commit/603b69583635ffcedf2a5e1d0f70da77edf82d10
 * Upstream date: 2024-03-04 14:31:40 +0800
 * Upstream subject: feat: add esp32c5 beta3 support wifi
 * Source: libbtbb -> bt_bb_v2.o -> ble_rx_start_rst_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_rx_start_rst_en(int param_1)

{
  if (param_1 == 0) {
    _DAT_600a2188 = _DAT_600a2188 & 0xfffffffe;
  }
  else {
    _DAT_600a2188 = _DAT_600a2188 | 1;
  }
  return;
}

