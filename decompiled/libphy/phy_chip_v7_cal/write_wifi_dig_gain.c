/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> write_wifi_dig_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void write_wifi_dig_gain(S8 backoff)

{
  int in_a0;
  int in_a5;
  undefined8 unaff_fs0;
  undefined8 in_fa3;
  undefined8 in_fa5;
  sint8 gain_table [8];
  
  *(undefined8 *)(in_a0 + 0x20) = unaff_fs0;
  *(undefined8 *)(in_a5 + 0x7c) = in_fa5;
  *(undefined8 *)(in_a0 + 0xd8) = in_fa3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

