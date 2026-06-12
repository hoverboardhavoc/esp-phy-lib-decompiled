/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
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
  _DAT_20101834 = &DAT_00010fdf;
  if (_DAT_20101550 != 0) {
    __assert_func("ble_tx_rx_test.c",0x15e,"ble_rx_init",
                  "RADIO->STATE == RADIO_STATE_STATE_Disabled");
  }
  return;
}

