/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
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
  iVar2 = phy_time_now();
  while (_DAT_600c1450 == 0) {
    iVar3 = GetStopCmd();
    if ((iVar3 == 0) ||
       ((param_1 != 0 && (iVar3 = phy_time_now(), param_1 < (uint)(iVar3 - iVar2))))) {
      _DAT_600c1410 = 1;
      return 0;
    }
  }
  sVar1 = ble_rx_check_status();
  if (sVar1 == 0) {
    *param_4 = *param_4 + 1;
    iVar2 = (int)(char)_DAT_600c1548;
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

