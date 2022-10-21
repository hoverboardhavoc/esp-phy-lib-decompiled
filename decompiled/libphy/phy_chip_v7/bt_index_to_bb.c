/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> bt_index_to_bb
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

uint16 bt_index_to_bb(uint16 index)

{
  undefined8 *unaff_s0;
  int unaff_s1;
  int in_a5;
  undefined8 in_fa5;
  
  *(undefined8 *)(unaff_s1 + 0x28) = *unaff_s0;
  *(undefined8 *)(in_a5 + 0x7c) = in_fa5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

