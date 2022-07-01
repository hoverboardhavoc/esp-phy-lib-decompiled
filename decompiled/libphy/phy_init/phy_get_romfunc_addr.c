/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
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
  iVar2 = chip729_phyrom_version_num();
  iVar1 = g_phyFuns;
  if (iVar2 == 1) {
    *(undefined **)(g_phyFuns + 0x68) = &rom_pbus_rd_addr;
    *(undefined **)(iVar1 + 0x6c) = &rom_pbus_rd_shift;
    *(undefined **)(iVar1 + 0x114) = &rom_fe_reg_init;
    *(undefined **)(iVar1 + 300) = &rom_agc_reg_init;
    *(undefined **)(iVar1 + 0xb4) = &rom_get_tone_sar_dout;
    *(undefined **)(iVar1 + 0x90) = &rom_pbus_xpd_tx_on;
    *(undefined **)(iVar1 + 0x88) = &rom_pbus_xpd_rx_on;
    *(undefined **)(iVar1 + 0x80) = &rom_pbus_set_rxgain;
    *(undefined **)(iVar1 + 0xa8) = &rom_en_pwdet;
    *(undefined **)(iVar1 + 0x1d8) = &rom_set_tx_gain_mem;
    *(undefined **)(iVar1 + 0x9c) = &rom_txcal_debuge_mode;
    *(undefined **)(iVar1 + 0x5c) = &rom_set_txcap_reg;
    *(undefined **)(iVar1 + 0x10c) = &rom_i2cmst_reg_init;
    *(undefined **)(iVar1 + 0x1a8) = &rom_temp_to_power;
    *(undefined **)(iVar1 + 0x1cc) = &rom_bt_get_tx_gain;
    *(undefined **)(iVar1 + 0xf4) = &rom_enable_wifi_agc;
    *(undefined **)(iVar1 + 0x108) = &ram_tx_paon_set;
  }
  phy_param_addr(&phy_param);
  iVar1 = g_phyFuns;
  *(undefined **)(g_phyFuns + 0x4c) = &ram_chip_i2c_writeReg;
  *(undefined **)(iVar1 + 0x2c) = &ram_chip_i2c_readReg;
  *(undefined **)(iVar1 + 0x138) = &ram_open_i2c_xpd;
  *(undefined **)(iVar1 + 0x154) = &ram_rfpll_set_freq;
  return;
}

