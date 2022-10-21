/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> set_rx_gain_cal_dc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void set_rx_gain_cal_dc(bool bt_mode,uint8 mode_start,uint8 mode_end,uint8 *rx_gain_swp,
                       uint32 *rxrf_dc,uint32 *rxbb_dc,uint32 *chan_dc,uint8 rf_dc_num,
                       uint8 bb_dc_num,uint8 chan_dc_num)

{
  int in_a2;
  int32 dc_est [3];
  uint16 bbc_m [5];
  sint16 rx_dc_comp [2];
  
  if (in_a2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

