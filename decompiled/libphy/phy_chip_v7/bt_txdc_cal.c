/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> bt_txdc_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void bt_txdc_cal(void)

{
  int iVar1;
  int unaff_s1;
  int *in_a0;
  int in_a2;
  int in_a5;
  undefined4 in_ft5;
  undefined8 in_fa2;
  undefined8 in_fa4;
  u16 txdc [4];
  
  iVar1 = *in_a0;
  *(undefined8 *)(in_a5 + 0x7c) = in_fa4;
  *(undefined8 *)(iVar1 + 0x40) = in_fa2;
  if (in_a2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while (in_a5 != 0) {
    *(undefined4 *)((int)register0x00002008 + 0x24) = in_ft5;
    register0x00002008 = *(BADSPACEBASE **)register0x00002008;
  }
  if (unaff_s1 == -0xb) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)register0x00002008 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

