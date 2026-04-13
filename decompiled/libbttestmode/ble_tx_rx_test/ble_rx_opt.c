/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
    param_1 = (uint)(byte)ch_map2[param_1];
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

