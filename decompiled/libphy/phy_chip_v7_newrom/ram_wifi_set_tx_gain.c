/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_wifi_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ram_wifi_set_tx_gain(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  iVar1 = (int)DAT_00012207;
  iVar2 = (int)DAT_000120a6;
  ram_tester_wifi_cali(auStack_30,param_2);
  if (DAT_000120a5 == '\0') {
    ram_get_chan_target_power
              (param_1,(int)DAT_000120a4,auStack_40,auStack_30,DAT_00012110,&chip7_phy_init_ctrl,
               &phy_param);
    ram_wifi_get_tx_gain
              (param_1,&phy_param,auStack_40,(int)DAT_00012181,(iVar1 - iVar2) * 0x1000000 >> 0x18,
               &phy_param,&phy_param,&phy_param);
    rom_set_tx_gain_mem(0,0xe,&phy_param,&phy_param,&phy_param,&phy_param);
    ram_wifi_tx_dig_gain(&phy_param);
  }
  return;
}

