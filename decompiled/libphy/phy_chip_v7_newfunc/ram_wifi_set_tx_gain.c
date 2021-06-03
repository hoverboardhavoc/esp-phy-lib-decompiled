/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newfunc.o -> ram_wifi_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ram_wifi_set_tx_gain(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [24];
  
  if (DAT_000110a1 == '\0') {
    iVar1 = (int)DAT_00011203;
    iVar2 = (int)DAT_000110a2;
    ram_get_chan_target_power
              ((int)DAT_000110a0,auStack_30,&phy_param,DAT_0001110c,&chip7_phy_init_ctrl,&phy_param)
    ;
    ram_wifi_get_tx_gain
              (param_1,&phy_param,auStack_30,(int)DAT_0001117d,(iVar1 - iVar2) * 0x1000000 >> 0x18,
               &phy_param,&phy_param,&phy_param);
    rom_set_tx_gain_mem(0,0xe,&phy_param,&phy_param,&phy_param,&phy_param);
    rom_wifi_tx_dig_gain(&phy_param);
  }
  return;
}

