/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> ant_dft_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void ant_dft_cfg(bool default_ant)

{
  int in_a0;
  int in_a1;
  int in_a5;
  int unaff_s9;
  undefined8 in_fa3;
  undefined8 in_fa5;
  undefined4 in_ft10;
  
  *(undefined8 *)(in_a5 + 0x7c) = in_fa5;
  *(undefined8 *)(in_a0 + 0xd8) = in_fa3;
  if (in_a1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
  } while (in_a5 != 0);
  *(undefined4 *)(*(int *)(*(char *)(unaff_s9 + -1) + 0x4c) + 0xfc) = in_ft10;
  tp = tp << 8;
  if (in_a0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

