/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_rx(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 - 0x938 & 0xffff) < 0x29) {
    if (0x94c < _phy_param) {
      phy_set_chan_freq_base(0x938);
    }
    _DAT_600c13f4 = _DAT_600c13f4 & 0xffffffbf;
    _DAT_600c1508 = _DAT_600c1508 & 0xfffffcff | 0x100;
    phy_xtal_freq_dreg_set(param_1);
    param_1 = ble_freq_trans_chan_2360(param_1);
  }
  else {
    if (_phy_param < 0x94c) {
      phy_set_chan_freq_base(0x962);
    }
    _DAT_600c13f4 = _DAT_600c13f4 & 0xffffffbf;
    _DAT_600c1508 = _DAT_600c1508 & 0xfffffcff | 0x100;
    phy_xtal_freq_dreg_set((byte)ch_map2[param_1] + 2);
  }
  bt_track_pll_cap();
  ble_radio_init();
  ble_whitening_enable(0);
  iVar3 = 0;
  iVar1 = 0;
  do {
    ble_rx_start(param_1 & 0xff,param_2);
    while (_DAT_600c1450 == 0) {
      iVar2 = GetStopCmd();
      if (iVar2 == 0) {
        _DAT_600c1410 = 1;
        _DAT_6004905c = 1;
        if (iVar1 == 0) {
          if ((_DAT_60093004 & 0x100) == 0) {
            _DAT_60093004 = _DAT_60093004 | 0x100;
          }
          else {
            _DAT_60093004 = _DAT_60093004 & 0xfffffeff;
          }
        }
        ets_printf("%x %x %x %x %x %x %x %d %d %d p %d %d %d %d\n",iVar1 + iVar3,iVar1,0,0,iVar3,0,0
                  );
        phy_xtal_freq_dreg_set(0);
        return;
      }
    }
    iVar2 = ble_rx_check_status();
    if (iVar2 == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      iVar3 = iVar3 + 1;
    }
  } while( true );
}

