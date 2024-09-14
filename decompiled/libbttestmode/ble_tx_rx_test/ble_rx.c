/*
 * Last changed at upstream commit 8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * https://github.com/espressif/esp-phy-lib/commit/8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * Upstream date: 2024-09-14 10:30:08 +0800
 * Upstream subject: update ESP32, S2 and H2 librftest.a to support RF cert_test
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
  xtal_freq_rx_cal(1,(byte)ch_map2[param_1] + 2,0);
  ble_radio_init();
  ble_whitening_enable(0);
  iVar3 = 0;
  iVar4 = 0;
  iVar1 = 0;
  do {
    ble_rx_start(param_1,param_2);
    while (_DAT_600a1110 == 0) {
      iVar2 = GetStopCmd();
      if (iVar2 == 0) {
        _DAT_600a1010 = 1;
        _DAT_6004905c = 1;
        ___floatunsidf = 0;
        if (iVar1 != 0) {
          ___floatunsidf = iVar3 / iVar1;
        }
        esp_rx_valid = 2;
        if (iVar1 == 0) {
          if ((_DAT_60091004 & 0x100) == 0) {
            _DAT_60091004 = _DAT_60091004 | 0x100;
          }
          else {
            _DAT_60091004 = _DAT_60091004 & 0xfffffeff;
          }
        }
        _esp_rx_result = iVar3;
        ___muldf3 = iVar1;
        phy_printf("%x %x %x %x %x %x %x %d %d %d p %d %d %d %d\n",iVar1 + iVar4,iVar1,0,0,iVar4,0,0
                  );
        xtal_freq_rx_cal(0,(byte)ch_map2[param_1] + 2,0);
        return;
      }
    }
    iVar2 = ble_rx_check_status();
    if (iVar2 == 0) {
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + (char)_DAT_600a1548 + 10;
    }
    else {
      iVar4 = iVar4 + 1;
    }
  } while( true );
}

