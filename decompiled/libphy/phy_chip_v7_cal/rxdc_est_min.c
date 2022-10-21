/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> rxdc_est_min
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void rxdc_est_min(uint16 smp_num,bool cal_en,int32 *dc_est,uint8 *cal_num)

{
  undefined8 in_ft8;
  int32 dc_est_m [3];
  uint8 pwr_i;
  
  _DAT_0000000e = in_ft8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

