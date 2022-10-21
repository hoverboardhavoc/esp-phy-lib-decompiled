/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_ana.o -> phy_get_fetx_delay
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

uint16 phy_get_fetx_delay(void)

{
  uint32_t val;
  int unaff_s0;
  int unaff_s1;
  undefined8 *in_a0;
  uint32_t val_1;
  int in_a1;
  undefined4 unaff_s9;
  undefined8 unaff_fs0;
  
  *in_a0 = unaff_fs0;
  custom3.rd.rs1.rs2(unaff_s9,0);
  if (unaff_s1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_s1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_s0 + 0x40) = unaff_s0;
  do {
  } while (in_a1 != -0xb);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

