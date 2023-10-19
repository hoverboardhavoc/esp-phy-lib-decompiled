/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_a_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

bool ble_tx_a_frame(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
                   undefined1 param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  ble_tx_start(param_2);
  iVar1 = ble_tx_check_status();
  if (iVar1 == 0) {
    *param_4 = *param_4 + 1;
  }
  else {
    *param_5 = *param_5 + 1;
  }
  rw_cca_fifo_print(param_3);
  bt_track_pll_cap();
  bt_track_pbus_update(param_6);
  iVar2 = GetStopCmd();
  bVar3 = false;
  if ((iVar2 != 0) && ((*param_4 + *param_5 != param_1 || (bVar3 = false, param_1 == 0)))) {
    bVar3 = iVar1 != 3;
  }
  return bVar3;
}

