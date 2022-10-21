/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> ram_gen_rx_gain_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

uint8 ram_gen_rx_gain_table
                (uint32 *rx_gain_table,uint8 gain_lpf_max,uint8 *rx_gain_swp,sint8 *rx_gain_swp_step
                ,uint8 rx_gain_swp_num,uint8 max_bb_gain,bool print_en)

{
  uint16 bb_coarse_gain [5];
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

