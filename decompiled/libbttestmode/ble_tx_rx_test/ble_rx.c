/*
 * Last changed at upstream commit 98617ae683c7456706c7de6e27b7f0355c77dc9b
 * https://github.com/espressif/esp-phy-lib/commit/98617ae683c7456706c7de6e27b7f0355c77dc9b
 * Upstream date: 2023-12-29 17:32:23 +0800
 * Upstream subject: fix h2 crash at pos rssi bug
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
  
  chip_v7_set_chan(1,0);
  bt_track_pll_cap();
  xtal_freq_rx_cal(1,(byte)ch_map2[param_1] + 2,0);
  ble_radio_init();
  ble_whitening_enable(0);
  iVar2 = 0;
  iVar3 = 0;
  do {
    ble_rx_start(param_1,param_2);
    while (_DAT_600a1110 == 0) {
      iVar1 = GetStopCmd();
      if (iVar1 == 0) {
        _DAT_600a1010 = 1;
        _DAT_6004905c = 1;
        if (iVar3 == 0) {
          if ((_DAT_60091004 & 0x100) == 0) {
            _DAT_60091004 = _DAT_60091004 | 0x100;
          }
          else {
            _DAT_60091004 = _DAT_60091004 & 0xfffffeff;
          }
        }
        phy_printf("%x %x %x %x %x %x %x %d %d %d p %d %d %d %d\n",iVar3 + iVar2,iVar3,0,0,0,0);
        xtal_freq_rx_cal(0,(byte)ch_map2[param_1] + 2,0);
        return;
      }
    }
    iVar1 = ble_rx_check_status();
    if (iVar1 == 0) {
      iVar3 = iVar3 + 1;
    }
    else {
      iVar2 = iVar2 + 1;
    }
  } while( true );
}

