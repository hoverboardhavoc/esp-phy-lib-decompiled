/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx_opt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ble_rx_opt(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_1 = (uint)(byte)(&ch_map2)[param_1];
    iVar1 = 0x962;
  }
  else {
    if (0x1a < param_1) goto _L123;
    param_1 = param_1 * 5;
    iVar1 = 0x92e;
  }
  param_1 = param_1 + iVar1;
_L123:
  if (ble_rx_opt_en != '\0') {
    if ((((param_1 == 0x974) || (param_1 == 0x988)) || (param_1 == 0x99c)) || (param_1 == 0x9b0)) {
      phy_rx_opt_cfg(param_1 & 0xffff);
      return;
    }
  }
  return;
}

