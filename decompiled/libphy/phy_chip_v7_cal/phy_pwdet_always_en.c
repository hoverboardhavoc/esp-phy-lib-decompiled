/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> phy_pwdet_always_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void phy_pwdet_always_en(bool always_en)

{
  undefined3 unaff_00002009;
  int iVar1;
  int unaff_s0;
  int in_a0;
  int in_a2;
  int in_a3;
  undefined4 in_a6;
  int unaff_s8;
  undefined8 uVar2;
  
  iVar1 = *(int *)(CONCAT31(unaff_00002009,always_en) + 0x4c);
  if (in_a0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *(undefined8 *)(in_a2 + 0x40);
  if (unaff_s0 == -0xe) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00012ea6(*(undefined8 *)(in_a3 + 0x44));
  *(undefined4 *)(unaff_s8 + 0x2b4) = in_a6;
  *(undefined8 *)(iVar1 + 0x40) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

