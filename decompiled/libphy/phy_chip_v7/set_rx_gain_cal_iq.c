/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> set_rx_gain_cal_iq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Unknown calling convention */

void set_rx_gain_cal_iq(bool bt_mode,S16 tone_freq,uint16 *rxbb_iq,bool rxiq_print_en)

{
  uint16 bbgain_m [5];
  sint16 rx_dc_comp [4];
  uint8 rftx_m [5];
  
  FUN_00011e2a();
  return;
}

