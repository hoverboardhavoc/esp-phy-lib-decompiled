/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  if ((((iVar1 == 0) && (uVar2 = 1, _DAT_600a110c == 1)) && ((_DAT_600a113c & 1) == 0)) &&
     (_DAT_600a1100 == 1)) {
    if (_DAT_600a1110 == 1) {
      _DAT_600a110c = 0;
      _DAT_600a1110 = 0;
      _DAT_600a1100 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}

