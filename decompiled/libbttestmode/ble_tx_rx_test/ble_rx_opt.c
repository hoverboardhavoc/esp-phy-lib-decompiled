/*
 * Last changed at upstream commit ab9b9d0880221ad8423d78ba36e73ff2cb450358
 * https://github.com/espressif/esp-phy-lib/commit/ab9b9d0880221ad8423d78ba36e73ff2cb450358
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix wifi boot bug at low temp
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
    if (0x1a < param_1) goto _L108;
    param_1 = param_1 * 5;
    iVar1 = 0x92e;
  }
  param_1 = param_1 + iVar1;
_L108:
  if (ble_rx_opt_en != '\0') {
    if ((((param_1 == 0x974) || (param_1 == 0x988)) || (param_1 == 0x99c)) || (param_1 == 0x9b0)) {
      phy_rx_opt_cfg(param_1 & 0xffff);
      return;
    }
  }
  return;
}

