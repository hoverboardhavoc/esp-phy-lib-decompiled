/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_event_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ble_event_check(void)

{
  int iVar1;
  
  iVar1 = 1;
  if (_DAT_600a1104 == 0) {
    iVar1 = -(uint)(_DAT_600a1100 == 0);
  }
  if (_DAT_600a1108 != 0) {
    iVar1 = 2;
  }
  if (_DAT_600a110c != 0) {
    iVar1 = 3;
  }
  if (_DAT_600a1110 != 0) {
    iVar1 = 4;
  }
  return iVar1;
}

