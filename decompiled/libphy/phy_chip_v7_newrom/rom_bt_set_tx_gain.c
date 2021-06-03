/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_bt_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_bt_set_tx_gain(void)

{
  ram_bt_get_tx_gain(phy_param_rom + 0x179,(int)*(char *)(phy_param_rom + 0x17c),
                     (int)*(char *)(phy_param_rom + 0x1fc),phy_param_rom + 0x68,phy_param_rom + 0x20
                     ,phy_param_rom + 0x76,phy_param_rom + 0x1aa,phy_param_rom + 0x19a);
  rom_set_tx_gain_mem(1,0x10,phy_param_rom + 0x19a,phy_param_rom + 0x17e,phy_param_rom + 0x182,
                      phy_param_rom + 0x180);
  _DAT_60006014 = *(undefined4 *)(phy_param_rom + 0x1aa);
  _DAT_60006018 = *(undefined4 *)(phy_param_rom + 0x1ae);
  _DAT_6000601c = *(undefined4 *)(phy_param_rom + 0x1b2);
  _DAT_60006020 = *(undefined4 *)(phy_param_rom + 0x1b6);
  return;
}

