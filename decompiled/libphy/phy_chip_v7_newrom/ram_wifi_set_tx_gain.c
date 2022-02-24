/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
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
  
  iVar1 = (int)DAT_000121ff;
  iVar2 = (int)DAT_0001209e;
  ram_tester_wifi_cali(auStack_30,param_2);
  if (DAT_0001209d == '\0') {
    ram_get_chan_target_power
              (param_1,(int)DAT_0001209c,auStack_40,auStack_30,DAT_00012108,&chip7_phy_init_ctrl,
               &phy_param);
    ram_wifi_get_tx_gain
              (param_1,&phy_param,auStack_40,(int)DAT_00012179,(iVar1 - iVar2) * 0x1000000 >> 0x18,
               &phy_param,&phy_param,&phy_param);
    rom_set_tx_gain_mem(0,0xe,&phy_param,&phy_param,&phy_param,&phy_param);
    ram_wifi_tx_dig_gain(&phy_param);
  }
  return;
}

