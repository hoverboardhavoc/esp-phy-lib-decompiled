/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_ana.o -> bb_bss_cbw40_ana
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void bb_bss_cbw40_ana(int cbw40)

{
  uint8 delta_rx;
  uint8 delta_tx;
  int in_a4;
  int in_a5;
  undefined4 in_stack_00000060;
  
  do {
  } while (in_a5 != 0);
  tp = gp;
  *(undefined4 *)(in_a4 + 0x60) = in_stack_00000060;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

