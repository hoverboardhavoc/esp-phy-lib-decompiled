/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_a_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

bool ble_tx_a_frame(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  ble_tx_start(param_2);
  iVar1 = ble_tx_check_status();
  phy_bt_track_pll_cap();
  if (iVar1 == 0) {
    *param_4 = *param_4 + 1;
  }
  else {
    *param_5 = *param_5 + 1;
  }
  rw_cca_fifo_print(param_3);
  iVar2 = GetStopCmd();
  bVar3 = false;
  if ((iVar2 != 0) && ((*param_4 + *param_5 != param_1 || (bVar3 = false, param_1 == 0)))) {
    bVar3 = iVar1 != 3;
  }
  return bVar3;
}

