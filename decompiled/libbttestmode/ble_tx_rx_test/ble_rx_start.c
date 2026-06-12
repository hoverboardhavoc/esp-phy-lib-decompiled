/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
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
  _DAT_20101834 = &DAT_00010fdf;
  _DAT_20101450 = 0;
  _DAT_2010143c = 0;
  _DAT_20101470 = 0;
  _DAT_20101474 = 0;
  _DAT_201014b0 = 0x13;
  _DAT_20101404 = 1;
  rx_en_flag = 1;
  return;
}

