/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> FUN_00012ff8
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001300a) */
/* WARNING: Removing unreachable block (ram,0x00012f74) */
/* WARNING: Removing unreachable block (ram,0x00012f76) */
/* WARNING: Removing unreachable block (ram,0x00012f78) */
/* WARNING: Removing unreachable block (ram,0x00012f7a) */
/* WARNING: Removing unreachable block (ram,0x00013010) */
/* WARNING: Removing unreachable block (ram,0x00013012) */
/* WARNING: Removing unreachable block (ram,0x00013014) */
/* WARNING: Removing unreachable block (ram,0x00013016) */
/* WARNING: Removing unreachable block (ram,0x0001301a) */
/* WARNING: Removing unreachable block (ram,0x00012f84) */
/* WARNING: Removing unreachable block (ram,0x00012f86) */
/* WARNING: Removing unreachable block (ram,0x00012f88) */
/* WARNING: Removing unreachable block (ram,0x00013020) */
/* WARNING: Removing unreachable block (ram,0x00013022) */
/* WARNING: Removing unreachable block (ram,0x00013024) */
/* WARNING: Removing unreachable block (ram,0x00013026) */
/* WARNING: Removing unreachable block (ram,0x00012f8a) */

void FUN_00012ff8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 uRam00000020)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 in_stack_00000018;
  
  if (unaff_s0 == 0) {
    uRam00000020 = *(undefined8 *)(param_1 + 100);
    tp = in_stack_00000018;
    *(undefined8 *)(unaff_s1 + 0x68) = param_2;
    *(undefined8 *)(param_1 + 0xd8) = param_3;
    custom2();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00012db6();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

