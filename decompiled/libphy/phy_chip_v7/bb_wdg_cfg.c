/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> bb_wdg_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void bb_wdg_cfg(void)

{
  int unaff_s0;
  undefined8 *in_a0;
  int in_a1;
  int in_a3;
  int in_a5;
  undefined8 in_ft0;
  undefined8 uVar1;
  undefined8 in_fa2;
  undefined4 in_ft10;
  int in_stack_0000004c;
  
  uVar1 = *in_a0;
  *(undefined4 *)(in_stack_0000004c + 0xfc) = in_ft10;
  if (in_a1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(in_stack_0000004c + 0x158) = in_ft0;
  *(int *)(unaff_s0 + 0x50) = in_a1;
  *(undefined8 *)(in_a3 + 0x10) = uVar1;
  *(int *)(unaff_s0 + 0x40) = unaff_s0;
  *(undefined8 *)(in_stack_0000004c + 0x80) = in_fa2;
  if (in_a5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

