/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_freq_trans_chan_2360
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint ble_freq_trans_chan_2360(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0x938) {
    uVar1 = 0x25;
  }
  else {
    uVar1 = 0x26;
    if (param_1 != 0x950) {
      if (param_1 < 0x950) {
        uVar1 = (int)(param_1 - 0x93a) / 2;
      }
      else {
        uVar1 = (int)(param_1 - 0x952) / 2 + 0xb;
      }
      return uVar1 & 0xffff;
    }
  }
  return uVar1;
}

