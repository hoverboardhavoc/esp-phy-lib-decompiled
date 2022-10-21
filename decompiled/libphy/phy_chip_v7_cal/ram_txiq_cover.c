/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> ram_txiq_cover
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void ram_txiq_cover(U8 tone_atten,S16 tone_freq,int8 *mis_data,bool pkdet_en)

{
  undefined3 unaff_00002009;
  undefined4 unaff_s0;
  undefined8 in_fa3;
  S16 pwr2;
  S16 pwr1;
  
  *(undefined8 *)(CONCAT31(unaff_00002009,tone_atten) + 0x80) = in_fa3;
  *(undefined4 *)(CONCAT31(unaff_00002009,tone_atten) + -0x13c) = unaff_s0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

