/*
 * Last changed at upstream commit 38908075833e4ae3a48e6ffe431a672698e07e21
 * https://github.com/espressif/esp-phy-lib/commit/38908075833e4ae3a48e6ffe431a672698e07e21
 * Upstream date: 2025-02-13 17:19:18 +0800
 * Upstream subject: update H2 libphy fit ECO5 btbb rssi fix
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_rx(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  chip_v7_set_chan(1,0);
  bt_track_pll_cap();
  xtal_freq_rx_cal(1,(byte)(&ch_map2)[param_1] + 2,0);
  ble_radio_init();
  ble_whitening_enable(0);
  iVar1 = 0;
  iVar3 = 0;
  iVar4 = 0;
  do {
    ble_rx_start(param_1,param_2);
    while (_DAT_600a1110 == 0) {
      iVar2 = GetStopCmd();
      if (iVar2 == 0) {
        _DAT_600a1010 = 1;
        _DAT_6004905c = 1;
        _phy_set_clk_conf = 0;
        if (iVar4 != 0) {
          _phy_set_clk_conf = iVar1 / iVar4;
        }
        esp_rx_valid = 2;
        if (iVar4 == 0) {
          if ((_DAT_60091004 & 0x100) == 0) {
            _DAT_60091004 = _DAT_60091004 | 0x100;
          }
          else {
            _DAT_60091004 = _DAT_60091004 & 0xfffffeff;
          }
        }
        _esp_rx_result = iVar1;
        _DAT_00012060 = iVar4;
        phy_printf("%x %x %x %x %x %x %x %d %d %d p %d %d %d %d\n",iVar4 + iVar3,iVar4,0,0,iVar3,0,0
                  );
        xtal_freq_rx_cal(0,(byte)(&ch_map2)[param_1] + 2,0);
        return;
      }
    }
    iVar2 = ble_rx_check_status();
    if (iVar2 == 0) {
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + (char)_DAT_600a1548 + ((int)(_BLE_RSSI_COMP + 1) >> 1);
    }
    else {
      iVar3 = iVar3 + 1;
    }
  } while( true );
}

