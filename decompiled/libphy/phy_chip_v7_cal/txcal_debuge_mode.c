/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> txcal_debuge_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void txcal_debuge_mode(void)

{
  undefined8 *unaff_s0;
  int in_a0;
  int in_a5;
  undefined8 uVar1;
  undefined8 in_fa2;
  undefined8 in_fa3;
  undefined8 in_fa5;
  int in_stack_0000004c;
  
  *(undefined8 *)(in_a5 + 0x7c) = in_fa5;
  unaff_s0[8] = in_fa2;
  uVar1 = *(undefined8 *)(in_a0 + 0x20);
  if (in_a5 == 0) {
    *(undefined8 *)(in_stack_0000004c + 0x120) = in_fa3;
    *unaff_s0 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

