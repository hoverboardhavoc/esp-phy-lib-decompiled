/*
 * Last changed at upstream commit 772432d2e9e7422159ee3ef01a07fc985ce9466a
 * https://github.com/espressif/esp-phy-lib/commit/772432d2e9e7422159ee3ef01a07fc985ce9466a
 * Upstream date: 2024-08-30 17:42:59 +0800
 * Upstream subject: feat(phy): add phy support for esp32c61
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx_a_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
ble_rx_a_frame(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  short sVar1;
  int iVar2;
  int *in_stack_00000000;
  int *in_stack_00000004;
  
  ble_rx_start();
  phy_bt_track_pll_cap();
  do {
    if (_DAT_600a1110 != 0) {
      sVar1 = ble_rx_check_status();
      if (sVar1 == 0) {
        *param_1 = *param_1 + 1;
        *param_5 = *param_5 + (int)(char)_DAT_600a1548;
        *param_4 = (_DAT_600a20b0 >> 8 & 0xff) + *param_4;
        *param_6 = *param_6 + ((int)_DAT_600a20b0 >> 0x18);
      }
      else {
        *param_2 = *param_2 + 1;
        *in_stack_00000000 = *in_stack_00000000 + (int)(char)_DAT_600a1548;
        *param_3 = (_DAT_600a20b0 >> 8 & 0xff) + *param_3;
        *in_stack_00000004 = *in_stack_00000004 + ((int)_DAT_600a20b0 >> 0x18);
      }
      return 1;
    }
    iVar2 = GetStopCmd();
  } while (iVar2 != 0);
  _DAT_600a1010 = 1;
  return 0;
}

