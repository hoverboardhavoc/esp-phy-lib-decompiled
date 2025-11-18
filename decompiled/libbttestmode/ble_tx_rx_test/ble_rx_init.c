/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_rx_init(void)

{
  ble_select_phy_speed();
  memset(&_LANCHOR3,0x55,0x140);
  _DAT_600c1834 = &DAT_0001119f;
  if (_DAT_600c1550 != 0) {
    __assert_func("ble_tx_rx_test.c",0x16f,"ble_rx_init",
                  "RADIO->STATE == RADIO_STATE_STATE_Disabled");
  }
  return;
}

