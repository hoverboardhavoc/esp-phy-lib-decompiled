/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_wifi_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rom_wifi_set_tx_gain(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_30 [24];
  
  if (*(char *)(phy_param_rom + 0x99) == '\0') {
    cVar1 = *(char *)(phy_param_rom + 0x1fb);
    cVar2 = *(char *)(phy_param_rom + 0x9a);
    rom_get_chan_target_power
              ((int)*(char *)(phy_param_rom + 0x98),auStack_30,phy_param_rom + 0xf4,
               *(undefined1 *)(phy_param_rom + 0x104),&chip7_phy_init_ctrl,phy_param_rom + 0x105);
    ram_wifi_get_tx_gain
              (param_1,phy_param_rom + 0x16f,auStack_30,(int)*(char *)(phy_param_rom + 0x175),
               ((int)cVar1 - (int)cVar2) * 0x1000000 >> 0x18,phy_param_rom + 0xe,
               phy_param_rom + 0x20,phy_param_rom + 0x44);
    rom_set_tx_gain_mem(0,0xe,phy_param_rom + 0x1e4,phy_param_rom + 0x1c8,phy_param_rom + 0x124,
                        phy_param_rom + 0x14c);
    rom_wifi_tx_dig_gain(phy_param_rom + 0x1ba);
  }
  return;
}

