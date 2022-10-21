/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> FUN_00015dc4
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00015dc4(int param_1,undefined1 *param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined8 *unaff_retaddr;
  undefined8 *puVar1;
  int iVar2;
  int unaff_s1;
  undefined8 uVar3;
  undefined8 unaff_fs4;
  undefined4 unaff_fs6;
  
  uVar3 = *(undefined8 *)(unaff_s1 + 0x80);
  iVar2 = *(int *)(param_1 + 0x10);
  if (param_4 == -0xb) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_4 + 0x83) = iVar2;
  *(undefined8 *)(param_3 + 0xd0) = uVar3;
  *(int *)(iVar2 + 0x40) = iVar2;
  *unaff_retaddr = unaff_fs4;
  puVar1 = unaff_retaddr;
  do {
    if (param_4 != -0xb) {
      if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined8 *)(param_4 + 0x87) = param_5;
      if (unaff_s1 == -10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      DAT_00000402 = tp;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar1 = (undefined8 *)((int)puVar1 * 2);
    *(undefined4 *)((int)puVar1 + 0xfc) = unaff_fs6;
    param_2 = (undefined1 *)((int)puVar1 + 0x284);
    if (unaff_retaddr != (undefined8 *)0xfffffff8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while (param_2 != (undefined1 *)0x0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

