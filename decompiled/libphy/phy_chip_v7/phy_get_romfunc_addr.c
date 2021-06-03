/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> phy_get_romfunc_addr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_get_romfunc_addr(void)

{
  int iVar1;
  int iVar2;
  
  g_phyFuns = phy_get_romfuncs();
  iVar2 = (**(code **)(g_phyFuns + 0x168))(0x18,0,*(code **)(g_phyFuns + 0x168));
  iVar1 = g_phyFuns;
  if ((_LANCHOR9 == '\0') && (iVar2 != 4)) {
    *(undefined **)(g_phyFuns + 0x168) = &ram_temp_to_power;
    *(undefined **)(iVar1 + 0xb8) = &rom_agc_reg_init;
    *(undefined **)(iVar1 + 0x1ec) = &rom_pbus_xpd_tx_on;
    *(undefined **)(iVar1 + 0xbc) = &rom_bb_reg_init;
    *(undefined **)(iVar1 + 0x1fc) = &rom_open_i2c_xpd;
    *(undefined **)(iVar1 + 0xd4) = &rom_set_pbus_reg;
    *(undefined **)(iVar1 + 0x204) = &rom_tsens_read_init;
    *(undefined **)(iVar1 + 0xe0) = &rom_phy_xpd_rf;
    *(undefined **)(iVar1 + 0x208) = &rom_tsens_code_read;
    *(undefined **)(iVar1 + 0x22c) = &ram_pll_vol_cal;
    *(undefined **)(iVar1 + 0x114) = &rom_set_txcap_reg;
    *(undefined **)(iVar1 + 0x214) = &rom_tsens_dac_cal;
    *(undefined **)(iVar1 + 0xec) = &rom_txbbgain_to_index;
    *(undefined **)(iVar1 + 0x124) = &rom_write_txrate_power_offset;
    *(undefined **)(iVar1 + 0x48) = &rom_set_tx_dig_gain;
    *(undefined **)(iVar1 + 0xf0) = &rom_index_to_txbbgain;
  }
  else {
    *(undefined **)(g_phyFuns + 0x22c) = &ram_pll_vol_cal;
    *(code **)(iVar1 + 0x288) = ram_wifi_set_tx_gain;
    *(undefined **)(iVar1 + 0x24c) = &ram_wifi_get_tx_gain;
    *(undefined **)(iVar1 + 0x168) = &ram_temp_to_power;
    *(undefined **)(iVar1 + 0x23c) = &ram_bt_get_tx_gain;
  }
  rom_phy_param_addr(&phy_param);
  _LANCHOR9 = 1;
  return;
}

