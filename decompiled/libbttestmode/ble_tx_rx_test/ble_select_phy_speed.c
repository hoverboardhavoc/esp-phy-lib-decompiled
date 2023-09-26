/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_select_phy_speed
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_select_phy_speed(uint param_1,int param_2)

{
  _DAT_600a1514 = *(undefined4 *)(PACKAGE_CFG_DEFINE + param_2 * 4);
  _DAT_600a1518 = 0x300ff;
  _DAT_600a152c = 0;
  _DAT_600a1530 = 1;
  _DAT_600a1534 = 0x103;
  _DAT_600a1538 = 0x65b;
  _DAT_600a153c = 0x555555;
  _DAT_600a151c = 0x76412900;
  _DAT_600a1524 = _DAT_600a1524 & 0xffffff00 | 0x71;
  _DAT_600a1508 = (uint)(byte)ch_map2[param_1];
  _DAT_600a1554 = param_1 | 0x40;
  _DAT_600a1510 = *(undefined4 *)(RADIO_MODE_DEFINE + param_2 * 4);
  return;
}

