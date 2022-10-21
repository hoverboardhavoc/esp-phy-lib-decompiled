/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_ana.o -> ram_restart_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ram_restart_cal(void)

{
  undefined8 *in_a0;
  undefined8 *in_a2;
  undefined8 uVar1;
  undefined4 in_fa0;
  undefined8 in_fa6;
  undefined4 in_ft11;
  undefined4 *in_stack_0000004c;
  
  uVar1 = *in_a0;
  in_stack_0000004c[0x3f] = in_ft11;
  *(undefined8 *)(in_stack_0000004c + 0x10) = in_fa6;
  *in_a2 = uVar1;
  *in_stack_0000004c = in_fa0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

