/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_check_status
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ble_tx_check_status(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ble_wait_disable();
  uVar2 = 3;
  if ((((iVar1 == 0) && (uVar2 = 1, _DAT_600c143c == 1)) && ((_DAT_600c147c & 1) == 0)) &&
     (_DAT_600c1430 == 1)) {
    if (_DAT_600c1450 == 1) {
      _DAT_600c143c = 0;
      _DAT_600c1450 = 0;
      _DAT_600c1430 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}

