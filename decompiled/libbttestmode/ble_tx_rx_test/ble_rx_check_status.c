/*
 * Last changed at upstream commit 8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * https://github.com/espressif/esp-phy-lib/commit/8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * Upstream date: 2024-09-14 10:30:08 +0800
 * Upstream subject: update ESP32, S2 and H2 librftest.a to support RF cert_test
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx_check_status
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x0001061a) */
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

