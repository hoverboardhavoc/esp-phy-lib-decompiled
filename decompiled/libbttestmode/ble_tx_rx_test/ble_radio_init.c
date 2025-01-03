/*
 * Last changed at upstream commit 1e3487dc778d48c15229af05ce0f03f78e15528c
 * https://github.com/espressif/esp-phy-lib/commit/1e3487dc778d48c15229af05ce0f03f78e15528c
 * Upstream date: 2025-01-03 11:45:24 +0800
 * Upstream subject: support h2 eco5 test
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_radio_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_radio_init(void)

{
  _DAT_600a1514 = PACKAGE_CFG_DEFINE;
  _DAT_600a1518 = 0x20300ff;
  _DAT_600a152c = 0;
  _DAT_600a1530 = 1;
  _DAT_600a1534 = 0x103;
  _DAT_600a1538 = 0x65b;
  _DAT_600a153c = 0x555555;
  _DAT_600a151c = 0x76412900;
  _DAT_600a1524 = _DAT_600a1524 & 0xffffff00 | 0x71;
  _DAT_600a1508 = 0;
  _DAT_600a1554 = 0x65;
  _DAT_600a1510 = RADIO_MODE_DEFINE << 4 | RADIO_MODE_DEFINE << 8 | RADIO_MODE_DEFINE;
  _DAT_600a1830 = &_LANCHOR2;
  _DAT_600a1834 = &DAT_000110a7;
  _DAT_600a1844 = 0;
  _DAT_600a1ff0 = 9;
  return;
}

