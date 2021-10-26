/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_bt_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_bt_set_tx_gain(void)

{
  ram_bt_get_tx_gain(&phy_param,(int)DAT_00012188,(int)DAT_00012208,&phy_param,&phy_param,&phy_param
                     ,&phy_param,&phy_param);
  rom_set_tx_gain_mem(1,0x10,&phy_param,&phy_param,&phy_param,&phy_param);
  _DAT_60006014 = _phy_param;
  _DAT_60006018 = _chip7_phy_init_ctrl;
  _DAT_6000601c = _noise_check_loop;
  _DAT_60006020 = _phy_bbpll_i2c;
  return;
}

