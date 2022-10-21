/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> bt_opt_2480
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void bt_opt_2480(bool opt_en)

{
  undefined3 unaff_00002009;
  int iVar1;
  int unaff_s0;
  int in_a0;
  int in_a4;
  int in_a5;
  undefined4 in_t5;
  undefined8 in_ft5;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_fa5;
  
  iVar1 = *(int *)(CONCAT31(unaff_00002009,opt_en) + 0x4c);
  uVar2 = *(undefined8 *)(unaff_s0 + 0x68);
  *(undefined8 *)(iVar1 + 0x120) = in_ft5;
  *(undefined8 *)(in_a5 + 0x7c) = in_fa5;
  uVar3 = *(undefined8 *)(in_a4 + 0x38);
  *(undefined8 *)(iVar1 + 0x40) = uVar2;
  _DAT_00000034 = in_t5;
  *(undefined8 *)(in_a0 + 0x78) = uVar3;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

