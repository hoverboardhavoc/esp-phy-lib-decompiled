/*
 * Last changed at upstream commit ae6f29bfebbfdacc1bba905afff3399fe733245f
 * https://github.com/espressif/esp-phy-lib/commit/ae6f29bfebbfdacc1bba905afff3399fe733245f
 * Upstream date: 2026-05-21 14:11:41 +0800
 * Upstream subject: support wifi api and regdma
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
  _DAT_20101834 = &DAT_00011007;
  _DAT_20101450 = 0;
  _DAT_2010143c = 0;
  _DAT_20101470 = 0;
  _DAT_20101474 = 0;
  _DAT_201014b0 = 0x13;
  _DAT_20101404 = 1;
  rx_en_flag = 1;
  return;
}

