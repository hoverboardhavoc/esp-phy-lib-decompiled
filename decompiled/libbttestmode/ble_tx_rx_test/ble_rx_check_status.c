/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx_check_status
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010620) */
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

