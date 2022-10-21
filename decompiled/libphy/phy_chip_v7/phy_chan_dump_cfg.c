/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> phy_chan_dump_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void phy_chan_dump_cfg(bool shift_force_en,uint8 shift_force,bool lltf_dump_en,bool htltf_dump_en,
                      bool stbcltf2_dump_en)

{
  undefined3 unaff_00002009;
  int unaff_s0;
  int in_a5;
  
  if (in_a5 == 0) {
    *(int *)(*(int *)(CONCAT31(unaff_00002009,shift_force_en) + 0x4c) + -0x7f) =
         (int)*(undefined8 *)(unaff_s0 + 0x40);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

