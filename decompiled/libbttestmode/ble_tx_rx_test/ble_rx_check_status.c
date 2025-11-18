/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx_check_status
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010634) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ble_rx_check_status(void)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((_DAT_600c1450 == 1) && (_DAT_600c1474 == 0)) && (uVar1 = 2, _DAT_600c1470 != 0)) {
    _DAT_600c143c = 0;
    _DAT_600c1450 = 0;
    _DAT_600c1430 = 0;
    _DAT_600c1470 = 0;
    return 0;
  }
  return uVar1;
}

