/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> tx_cont_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void tx_cont_en(void)

{
  int in_a5;
  undefined4 unaff_fs4;
  int in_stack_0000004c;
  
  do {
  } while (in_a5 != 0);
  tp = tp << 0xc;
  *(undefined4 *)(in_stack_0000004c + 0x38) = unaff_fs4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

