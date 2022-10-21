/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_ana.o -> FUN_000131e8
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000131e8(int param_1,int param_2,undefined4 uRam00000018)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 in_ft4;
  
  if (unaff_s0 == 0) {
    if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_s1 == 0) {
    if (unaff_s0 == 0) {
      tp = tp << 8;
      uRam00000018 = 0;
      *(undefined4 *)(param_2 + 0xfc) = in_ft4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    gp = gp + 0xf;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

