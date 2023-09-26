/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_continue
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_continue(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  (**(code **)(_g_phyFuns + 0x14))
            (ch_map2[param_1] + '\x02',0,phy_param,*(code **)(_g_phyFuns + 0x14));
  _DAT_6004905c = 0;
  _DAT_60049058 = 1;
  ble_select_phy_speed(param_1,param_2);
  puVar1 = (undefined4 *)&DAT_600a1000;
  _DAT_600a150c = param_3;
  if (_DAT_600a1550 != 0) {
    __assert_func("ble_tx_rx_test.c",0xda,"ble_tx_continue",
                  "RADIO->STATE == RADIO_STATE_STATE_Disabled");
  }
  puVar1[0x44] = 0;
  puVar1[0x40] = 0;
  puVar1[0x80] = 0;
  *puVar1 = 1;
  _DAT_600a2004 = _DAT_600a2004 | 0xc00;
  return;
}

