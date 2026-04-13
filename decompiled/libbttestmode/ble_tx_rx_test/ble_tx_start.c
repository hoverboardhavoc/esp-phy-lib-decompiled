/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_start(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  ble_stop_current_operation();
  iVar2 = 0x20101000;
  if (_DAT_20101550 != 0) {
    param_1 = __assert_func("ble_tx_rx_test.c",0xf9,"ble_tx_start",
                            "RADIO->STATE == RADIO_STATE_STATE_Disabled");
  }
  *(undefined4 *)(iVar2 + 0x450) = 0;
  *(undefined4 *)(iVar2 + 0x430) = 0;
  uVar1 = 0x21;
  if (param_1 == 0) {
    uVar1 = 3;
  }
  *(undefined4 *)(iVar2 + 0x4b0) = uVar1;
  _DAT_20101400 = 1;
  return;
}

