/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> btpwr_backoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000162ea) */
/* WARNING: Unknown calling convention */

void btpwr_backoff(s8 backoff)

{
  undefined3 unaff_00002009;
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  undefined4 in_a0;
  int in_a2;
  int iVar2;
  int in_a5;
  
  iVar1 = *(int *)(CONCAT31(unaff_00002009,backoff) + 0x4c);
  do {
  } while (in_a5 != 0);
  iVar2 = *(int *)(unaff_s0 + 0x5c);
  if (in_a2 == 0) {
    *(undefined8 *)(iVar1 + 0x40) = *(undefined8 *)(unaff_s0 + 0x40);
    uRam00000000 = in_a0;
    *(int *)(unaff_s1 + 4) = iVar1 + 0x48;
    if (iVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

