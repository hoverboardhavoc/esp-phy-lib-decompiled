/*
 * Last changed at upstream commit 98617ae683c7456706c7de6e27b7f0355c77dc9b
 * https://github.com/espressif/esp-phy-lib/commit/98617ae683c7456706c7de6e27b7f0355c77dc9b
 * Upstream date: 2023-12-29 17:32:23 +0800
 * Upstream subject: fix h2 crash at pos rssi bug
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
  _DAT_600a1834 = &DAT_0001105b;
  _DAT_600a1110 = 0;
  _DAT_600a110c = 0;
  _DAT_600a1130 = 0;
  _DAT_600a1134 = 0;
  _DAT_600a1200 = 0x13;
  _DAT_600a1004 = 1;
  rx_en_flag = 1;
  return;
}

