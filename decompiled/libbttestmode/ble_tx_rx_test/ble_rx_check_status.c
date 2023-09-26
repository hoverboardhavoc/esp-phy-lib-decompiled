/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx_check_status
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000105e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ble_rx_check_status(void)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((_DAT_600a1110 == 1) && (_DAT_600a1134 == 0)) && (uVar1 = 2, _DAT_600a1130 != 0)) {
    _DAT_600a110c = 0;
    _DAT_600a1110 = 0;
    _DAT_600a1100 = 0;
    _DAT_600a1130 = 0;
    return 0;
  }
  return uVar1;
}

