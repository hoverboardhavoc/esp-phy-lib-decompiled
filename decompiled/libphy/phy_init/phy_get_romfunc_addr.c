/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_init.o -> phy_get_romfunc_addr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_get_romfunc_addr(void)

{
  int iVar1;
  
  phy_param_addr(&phy_param);
  iVar1 = phy_get_romfuncs();
  g_phyFuns = iVar1;
  *(undefined **)(iVar1 + 0x48) = &ram_chip_i2c_readReg_org;
  *(undefined **)(iVar1 + 0x44) = &ram_get_i2c_hostid;
  *(undefined **)(iVar1 + 0x3c) = &ram_get_i2c_read_mask;
  *(undefined **)(iVar1 + 0x40) = &ram_get_i2c_mst0_mask;
  *(undefined **)(iVar1 + 0x14) = &ram_set_chan_freq_sw_start;
  *(undefined **)(iVar1 + 0x6c) = &ram_pbus_rd_addr;
  *(undefined **)(iVar1 + 0x70) = &ram_pbus_rd_shift;
  *(undefined **)(iVar1 + 0x98) = &ram_start_tx_tone_step;
  *(undefined **)(iVar1 + 0x8c) = &ram_pbus_xpd_tx_on;
  *(undefined **)(iVar1 + 0x24) = &ram_pwdet_tone_start;
  *(undefined **)(iVar1 + 0x2c) = &ram_read_sar_dout;
  *(undefined **)(iVar1 + 0x28) = &ram_pwdet_wait_idle;
  *(undefined **)(iVar1 + 0x9c) = &ram_stop_tx_tone;
  *(undefined **)(iVar1 + 0xa8) = &ram_bb_gain_index;
  *(undefined **)(iVar1 + 8) = &ram_set_chan_cal_interp;
  *(undefined **)(iVar1 + 0x10) = &ram_bb_bss_cbw40;
  *(undefined **)(iVar1 + 0x94) = &ram_txcal_debuge_mode;
  return;
}

