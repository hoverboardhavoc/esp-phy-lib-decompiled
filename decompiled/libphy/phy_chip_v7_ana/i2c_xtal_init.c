/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_ana.o -> i2c_xtal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void i2c_xtal_init(void)

{
  int unaff_s8;
  undefined4 in_fa0;
  undefined8 unaff_fs4;
  undefined4 in_ft11;
  undefined4 *in_stack_0000004c;
  
  in_stack_0000004c[0x3f] = in_ft11;
  *(undefined8 *)(in_stack_0000004c + 0x10) = unaff_fs4;
  if (unaff_s8 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_stack_0000004c = in_fa0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

