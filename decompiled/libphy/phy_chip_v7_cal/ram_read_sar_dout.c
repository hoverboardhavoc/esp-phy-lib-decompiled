/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> ram_read_sar_dout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

void ram_read_sar_dout(U16 *sar_data)

{
  int in_a5;
  undefined8 in_fa2;
  undefined8 *in_stack_0000004c;
  
  do {
  } while (in_a5 != 0);
  *in_stack_0000004c = in_fa2;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

