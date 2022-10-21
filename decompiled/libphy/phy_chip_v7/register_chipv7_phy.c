/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> register_chipv7_phy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

int register_chipv7_phy(u8 *init_param,uint8 *rf_cal_data,uint8 rf_cal_level)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 in_a3;
  int in_a5;
  
  while (in_a5 != 0) {
    unaff_s0 = *(int *)(in_a5 + 0x54);
    in_a3 = *(undefined4 *)(*(int *)(unaff_s1 + 0x58) + 0x58);
  }
  *(undefined4 *)(*(int *)(unaff_s0 + 4) + 0x44) = in_a3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

