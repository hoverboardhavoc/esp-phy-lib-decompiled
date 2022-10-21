/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> phy_get_bb_freqoffset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

sint16 phy_get_bb_freqoffset(void)

{
  int *unaff_s0;
  undefined8 *in_a0;
  int in_a2;
  int in_a5;
  undefined8 unaff_fs0;
  undefined8 in_fa2;
  undefined4 in_ft9;
  int in_stack_0000004c;
  
  *in_a0 = unaff_fs0;
  *(undefined4 *)(in_stack_0000004c + 0xfc) = in_ft9;
  if (in_a5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(in_a2 + 0x50) = in_fa2;
  *unaff_s0 = in_a2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

