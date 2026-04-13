/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_continue
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_continue(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  phy_set_chan_freq_sw_start(ch_map2[param_1] + '\x02',0,phy_param);
  _DAT_6004905c = 0;
  _DAT_60049058 = 1;
  ble_select_phy_speed(param_1,param_2);
  iVar1 = 0x20101000;
  _DAT_2010150c = param_3;
  if (_DAT_20101550 != 0) {
    __assert_func("ble_tx_rx_test.c",0x115,"ble_tx_continue",
                  "RADIO->STATE == RADIO_STATE_STATE_Disabled");
  }
  *(undefined4 *)(iVar1 + 0x450) = 0;
  *(undefined4 *)(iVar1 + 0x430) = 0;
  *(undefined4 *)(iVar1 + 0x4b0) = 0;
  *(undefined4 *)(iVar1 + 0x400) = 1;
  _DAT_20102004 = _DAT_20102004 | 0xc00;
  return;
}

