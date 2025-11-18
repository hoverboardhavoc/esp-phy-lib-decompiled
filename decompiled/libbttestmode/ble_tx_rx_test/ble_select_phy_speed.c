/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_select_phy_speed
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_select_phy_speed(uint param_1,int param_2)

{
  _DAT_600c1514 = (&PACKAGE_CFG_DEFINE)[param_2];
  _DAT_600c1518 = 0x300ff;
  _DAT_600c152c = 0;
  _DAT_600c1530 = 1;
  _DAT_600c1534 = 0x103;
  _DAT_600c1538 = 0x65b;
  _DAT_600c153c = 0x555555;
  _DAT_600c151c = 0x76412900;
  _DAT_600c1524 = _DAT_600c1524 & 0xffffff00 | 0x71;
  _DAT_600c1508 = (byte)ch_map2[param_1] & 0x7f | _DAT_600c1508 & 0xffffff80;
  _DAT_600c1554 = param_1 | 0x40;
  _DAT_600c1510 = (&RADIO_MODE_DEFINE)[param_2];
  _DAT_600c1074 = 0x40810000;
  return;
}

