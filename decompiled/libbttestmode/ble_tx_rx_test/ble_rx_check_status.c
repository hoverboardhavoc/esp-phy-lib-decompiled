/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx_check_status
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000107ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ble_rx_check_status(void)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((_DAT_20101450 == 1) && (_DAT_20101474 == 0)) && (uVar1 = 2, _DAT_20101470 != 0)) {
    _DAT_2010143c = 0;
    _DAT_20101450 = 0;
    _DAT_20101430 = 0;
    _DAT_20101470 = 0;
    return 0;
  }
  return uVar1;
}

