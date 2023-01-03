/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_init.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bb_init(void)

{
  _DAT_6000e000 = _DAT_6000e000 | 0x20000000;
  pbus_debugmode();
  (**(code **)(g_phyFuns + 0x80))(*(code **)(g_phyFuns + 0x80));
  pbus_workmode();
  if ((DAT_00010ad0 & 8) == 0) {
    txdc_cal_init_new(&DAT_00010ad4,0xf,0,0);
    pwdet_code_cal();
    tx_cap_init();
    tx_pwctrl_init_new(0);
    txdc_cal_pwdet_init(&DAT_00010ad4);
    txiq_cal_init_new();
    DAT_00010ad0 = DAT_00010ad0 | 8;
  }
  bt_tx_gain_init();
  set_pbus_mem();
  tsens_temp_read_new();
  rxiq_cal_init(0,&DAT_00010ad0);
  set_rx_gain_table(0x985,0);
  phy_reg_init();
  enable_agc();
  chip_v7_set_chan(0xb,0);
  _DAT_6000e000 = _DAT_6000e000 & 0xdfffffff;
  return;
}

