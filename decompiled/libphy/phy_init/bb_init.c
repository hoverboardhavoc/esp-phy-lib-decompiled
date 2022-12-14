/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_init.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bb_init(void)

{
  pbus_debugmode();
  (**(code **)(g_phyFuns + 0x80))(*(code **)(g_phyFuns + 0x80));
  pbus_workmode();
  if ((DAT_00010a80 & 8) == 0) {
    txdc_cal_init_new(&DAT_00010a84,0xf,0,0);
    pwdet_code_cal();
    tx_cap_init();
    tx_pwctrl_init_new(0);
    txiq_cal_init_new();
    DAT_00010a80 = DAT_00010a80 | 8;
  }
  bt_tx_gain_init();
  set_pbus_mem();
  tsens_temp_read_new();
  rxiq_cal_init(0,&DAT_00010a80);
  set_rx_gain_table(0x985,0);
  phy_reg_init();
  enable_agc();
  chip_v7_set_chan(0xb,0);
  _DAT_6000e000 = _DAT_6000e000 & 0xdfffffff;
  return;
}

