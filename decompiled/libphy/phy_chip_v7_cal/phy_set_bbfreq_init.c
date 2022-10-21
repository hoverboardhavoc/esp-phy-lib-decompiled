/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> phy_set_bbfreq_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x00010e8a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010e8c) */
/* WARNING: Unknown calling convention */

void phy_set_bbfreq_init(bool en_11b)

{
  int unaff_s1;
  undefined4 in_a4;
  int in_a5;
  
  if (in_a5 != 0) {
    do {
      *(undefined4 *)(unaff_s1 + 0x58) = in_a4;
    } while( true );
  }
  if (unaff_s1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

