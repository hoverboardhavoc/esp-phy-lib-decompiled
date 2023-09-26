/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  iVar3 = _DAT_600ad000;
  while (_DAT_600a1110 == 0) {
    iVar2 = GetStopCmd();
    if ((iVar2 == 0) || ((param_1 != 0 && (param_1 < (uint)(_DAT_600ad000 - iVar3))))) {
      _DAT_600a1010 = 1;
      return 0;
    }
  }
  sVar1 = ble_rx_check_status();
  if (sVar1 == 0) {
    *param_4 = *param_4 + 1;
    iVar3 = (int)(char)_DAT_600a1548;
    *param_6 = *param_6 + iVar3;
    if (*param_4 != 1) {
      if (*param_7 < iVar3) {
        *param_7 = iVar3;
      }
      if (*param_8 <= iVar3) {
        return 1;
      }
      *param_8 = iVar3;
      return 1;
    }
    *param_7 = iVar3;
    *param_8 = iVar3;
  }
  else {
    *param_5 = *param_5 + 1;
  }
  return 1;
}

