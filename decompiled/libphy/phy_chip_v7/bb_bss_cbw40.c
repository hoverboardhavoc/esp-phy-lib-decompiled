/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> bb_bss_cbw40
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void bb_bss_cbw40(int8 sub_chan_cfg)

{
  undefined3 unaff_00002009;
  undefined8 *puVar1;
  int in_a0;
  int in_a3;
  int in_a4;
  undefined8 in_fa5;
  undefined8 in_fa6;
  
  puVar1 = *(undefined8 **)(CONCAT31(unaff_00002009,sub_chan_cfg) + 0x4c);
  *(undefined8 *)(in_a3 + 0xe0) = in_fa5;
  if (in_a0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  custom0();
  *puVar1 = in_fa6;
  tp = tp + 0xd;
  *puVar1 = in_fa6;
  if (in_a4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

