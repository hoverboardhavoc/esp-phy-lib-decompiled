/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> force_bttx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void force_bttx_gain(bool force_en,uint8 pa_in,uint8 bb_in,uint8 dig_in)

{
  int unaff_s0;
  undefined8 in_fa2;
  sint8 bt_dig_atten [8];
  
  *(undefined8 *)(unaff_s0 + 0x40) = in_fa2;
  *(undefined4 *)(unaff_s0 * 0x1000000 + 4) = *(undefined4 *)(unaff_s0 + 0x24);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

