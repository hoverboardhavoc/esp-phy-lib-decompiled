/*
 * Last changed at upstream commit 8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * https://github.com/espressif/esp-phy-lib/commit/8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * Upstream date: 2024-09-14 10:30:08 +0800
 * Upstream subject: update ESP32, S2 and H2 librftest.a to support RF cert_test
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_start(int param_1)

{
  _DAT_600a1110 = 0;
  _DAT_600a1100 = 0;
  _DAT_600a1200 = 0x21;
  if (param_1 == 0 && fcc_mode_sel == '\0') {
    _DAT_600a1200 = 3;
  }
  _DAT_600a1000 = 1;
  return;
}

