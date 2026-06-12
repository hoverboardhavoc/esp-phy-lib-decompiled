/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_select_phy_speed
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_select_phy_speed(uint param_1,int param_2)

{
  _DAT_20101514 = (&PACKAGE_CFG_DEFINE)[param_2];
  _DAT_20101518 = 0x300ff;
  _DAT_2010152c = 0;
  _DAT_20101530 = 1;
  _DAT_20101534 = 0x103;
  _DAT_20101538 = 0x65b;
  _DAT_2010153c = 0x555555;
  _DAT_2010151c = 0x76412900;
  _DAT_20101524 = _DAT_20101524 & 0xffffff00 | 0x71;
  _DAT_20101508 = (byte)(&ch_map2)[param_1] & 0x7f | _DAT_20101508 & 0xffffff80;
  _DAT_20101554 = param_1 | 0x40;
  _DAT_20101510 = (&RADIO_MODE_DEFINE)[param_2];
  _DAT_20101074 = 0x2f000000;
  return;
}

