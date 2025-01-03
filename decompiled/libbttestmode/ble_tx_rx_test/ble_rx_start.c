/*
 * Last changed at upstream commit 1e3487dc778d48c15229af05ce0f03f78e15528c
 * https://github.com/espressif/esp-phy-lib/commit/1e3487dc778d48c15229af05ce0f03f78e15528c
 * Upstream date: 2025-01-03 11:45:24 +0800
 * Upstream subject: support h2 eco5 test
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_rx_start(void)

{
  ble_select_phy_speed();
  memset(&_LANCHOR3,0x55,0x140);
  _DAT_600a1834 = &DAT_000110a7;
  _DAT_600a1110 = 0;
  _DAT_600a110c = 0;
  _DAT_600a1130 = 0;
  _DAT_600a1134 = 0;
  _DAT_600a1200 = 0x13;
  _DAT_600a1004 = 1;
  rx_en_flag = 1;
  return;
}

