/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_init(void)

{
  rf_cal_level_check();
  txcal_gain_check();
  if (-1 < (int)(DAT_00010e58 << 0xf)) {
    set_pbus_mem();
    DAT_00010e58 = DAT_00010e58 | 0x10000;
  }
  if (-1 < (int)(DAT_00010e58 << 0xc)) {
    txdc_cal_init(&DAT_00010e5c,0xf,0x20,0);
    DAT_00010e58 = DAT_00010e58 | 0x80000;
  }
  pwdet_code_cal();
  tx_cap_init();
  freq_i2c_data_write();
  txpwr_offset(0);
  tx_pwctrl_init(0);
  txiq_cal_init();
  (**(code **)(g_phyFuns + 0x124))(*(code **)(g_phyFuns + 0x124));
  bt_tx_gain_init();
  ram_tsens_temp_read();
  set_rx_gain_table(0x985,0);
  rom_phy_reg_init();
  (**(code **)(g_phyFuns + 4))(*(code **)(g_phyFuns + 4));
  DAT_00010e9c = 0xfe80;
  DAT_00010f30 = 0xfe80;
  chip_v7_set_chan(0xb,0);
  return;
}

