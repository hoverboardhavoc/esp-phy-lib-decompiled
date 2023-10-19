/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_master_slave_rx_a_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
ble_master_slave_rx_a_frame
          (uint param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,int *param_6
          ,int *param_7,int *param_8)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  ble_rx_start(param_2,param_3);
  bt_track_pll_cap();
  iVar2 = phy_time_now();
  while (_DAT_600a1110 == 0) {
    iVar3 = GetStopCmd();
    if ((iVar3 == 0) ||
       ((param_1 != 0 && (iVar3 = phy_time_now(), param_1 < (uint)(iVar3 - iVar2))))) {
      _DAT_600a1010 = 1;
      return 0;
    }
  }
  sVar1 = ble_rx_check_status();
  if (sVar1 == 0) {
    *param_4 = *param_4 + 1;
    iVar2 = (int)(char)_DAT_600a1548;
    *param_6 = *param_6 + iVar2;
    if (*param_4 != 1) {
      if (*param_7 < iVar2) {
        *param_7 = iVar2;
      }
      if (*param_8 <= iVar2) {
        return 1;
      }
      *param_8 = iVar2;
      return 1;
    }
    *param_7 = iVar2;
    *param_8 = iVar2;
  }
  else {
    *param_5 = *param_5 + 1;
  }
  return 1;
}

