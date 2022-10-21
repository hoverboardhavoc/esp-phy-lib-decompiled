/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> phy_get_romfunc_addr
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
  iVar2 = rom_temp_to_power(0x10,0);
  iVar1 = g_phyFuns;
  if (iVar2 == 4) {
    *(undefined **)(g_phyFuns + 0x288) = &ram_wifi_set_tx_gain;
    *(undefined **)(iVar1 + 0x24c) = &ram_wifi_get_tx_gain;
    *(undefined **)(iVar1 + 0x23c) = &ram_bt_get_tx_gain;
    *(undefined **)(iVar1 + 0x28c) = &ram_txpwr_cal_track;
    *(undefined **)(iVar1 + 0x22c) = &ram_pll_vol_cal;
    *(undefined **)(iVar1 + 0x180) = &ram_get_i2c_hostid;
    *(code **)(iVar1 + 0x248) = ram_wifi_tx_dig_gain;
  }
  else {
    *(undefined **)(g_phyFuns + 0xb8) = &rom_agc_reg_init;
    *(undefined **)(iVar1 + 0xbc) = &rom_bb_reg_init;
    *(undefined4 *)(iVar1 + 0xe0) = 0x10000;
    *(undefined **)(iVar1 + 0x114) = &rom_set_txcap_reg;
    *(undefined **)(iVar1 + 0x124) = &rom_write_txrate_power_offset;
    *(undefined **)(iVar1 + 0x1ec) = &rom_pbus_xpd_tx_on;
    *(undefined **)(iVar1 + 0x1fc) = &rom_open_i2c_xpd;
    *(undefined **)(iVar1 + 0x208) = &rom_tsens_code_read;
    *(undefined **)(iVar1 + 0x48) = &rom_set_tx_dig_gain;
    *(undefined **)(iVar1 + 0xec) = &rom_txbbgain_to_index;
    *(undefined **)(iVar1 + 0xd4) = &ram_set_pbus_reg;
    *(undefined **)(iVar1 + 0x22c) = &ram_pll_vol_cal;
    *(undefined **)(iVar1 + 0xf0) = &rom_index_to_txbbgain;
    *(undefined **)(iVar1 + 0x180) = &ram_get_i2c_hostid;
  }
  *(undefined **)(iVar1 + 0x224) = &ram_phy_en_hw_set_freq;
  *(undefined **)(iVar1 + 8) = &ram_disable_wifi_agc;
  *(undefined **)(iVar1 + 0xc) = &ram_enable_wifi_agc;
  *(undefined **)(iVar1 + 0x14c) = &ram_read_sar2_code;
  *(code **)(iVar1 + 0x250) = ram_fe_i2c_reg_renew;
  *(undefined **)(iVar1 + 0x228) = &ram_phy_dis_hw_set_freq;
  rom_phy_param_addr(&phy_param);
  iVar1 = g_phyFuns;
  *(undefined **)(g_phyFuns + 0x8c) = &ram_set_noise_floor;
  *(undefined **)(iVar1 + 0xa8) = &ram_tx_paon_set;
  *(undefined **)(iVar1 + 0x1b0) = &ram_chip_i2c_writeReg;
  *(undefined **)(iVar1 + 400) = &ram_chip_i2c_readReg;
  *(code **)(iVar1 + 0x278) = ram_phy_i2c_init1;
  *(code **)(iVar1 + 600) = ram_i2c_master_reset;
  *(undefined **)(iVar1 + 0xd4) = &ram_set_pbus_reg;
  *(code **)(iVar1 + 0x27c) = ram_tsens_temp_read;
  return;
}

