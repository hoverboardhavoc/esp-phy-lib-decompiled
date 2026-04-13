/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
  if ((((iVar1 == 0) && (uVar2 = 1, _DAT_2010143c == 1)) && ((_DAT_2010147c & 1) == 0)) &&
     (_DAT_20101430 == 1)) {
    if (_DAT_20101450 == 1) {
      _DAT_2010143c = 0;
      _DAT_20101450 = 0;
      _DAT_20101430 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}

