/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_init(uint param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  
  ble_select_phy_speed();
  ble_radio_tx_data_init(param_3,param_2);
  uVar1 = 0xf;
  if (param_1 < 0x10) {
    uVar1 = param_1 & 0xff;
  }
  _DAT_600c150c = _DAT_600c150c & 0xffffff00 | uVar1;
  return;
}

