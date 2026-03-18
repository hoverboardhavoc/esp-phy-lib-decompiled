/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_radio_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_radio_init(void)

{
  _DAT_600c1514 = PACKAGE_CFG_DEFINE;
  _DAT_600c1518 = 0x20300ff;
  _DAT_600c152c = 0;
  _DAT_600c1530 = 1;
  _DAT_600c1534 = 0x103;
  _DAT_600c1538 = 0x65b;
  _DAT_600c153c = 0x555555;
  _DAT_600c151c = 0x76412900;
  _DAT_600c1524 = _DAT_600c1524 & 0xffffff00 | 0x71;
  _DAT_600c1508 = 0;
  _DAT_600c1554 = 0x65;
  _DAT_600c1510 = RADIO_MODE_DEFINE << 4 | RADIO_MODE_DEFINE << 8 | RADIO_MODE_DEFINE;
  _DAT_600c1830 = &_LANCHOR2;
  _DAT_600c1834 = &DAT_00011223;
  _DAT_600c1ff0 = 9;
  _DAT_600c1074 = 0x40810000;
  return;
}

