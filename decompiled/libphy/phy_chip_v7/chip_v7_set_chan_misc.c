/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> chip_v7_set_chan_misc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void chip_v7_set_chan_misc(int8 channel)

{
  undefined3 unaff_00002009;
  undefined1 in_t0;
  
  *(undefined1 *)(CONCAT31(unaff_00002009,channel) + -0xe0) = in_t0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

