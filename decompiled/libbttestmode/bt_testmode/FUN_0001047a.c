/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> FUN_0001047a
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001047a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  int iVar1;
  int unaff_s1;
  undefined8 unaff_fs0;
  undefined8 unaff_fs1;
  undefined8 in_fa0;
  
  *(undefined8 *)(unaff_s1 + 0x40) = param_7;
  *(undefined8 *)(unaff_s1 + 0x80) = in_fa0;
  *(undefined8 *)(unaff_s1 + 0x80) = param_9;
  *(undefined8 *)(unaff_s1 + 0xc0) = param_6;
  *param_1 = unaff_fs1;
  *param_1 = param_8;
  param_1[8] = param_5;
  param_1[0x10] = unaff_fs0;
  param_1[0x10] = param_7;
  param_1[0x18] = in_fa0;
  param_1[0x18] = param_9;
  *param_2 = param_6;
  param_2[8] = unaff_fs1;
  param_2[8] = param_8;
  param_2[0x10] = param_5;
  param_2[0x18] = unaff_fs0;
  param_2[0x18] = param_7;
  do {
    *param_3 = in_fa0;
    register0x00002008 = *(BADSPACEBASE **)((int)register0x00002008 + 0x4c);
    iVar1 = *(int *)(param_1 + 4);
  } while (param_4 != 0);
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00010420((int)param_1 + 0x1a,(undefined1 *)((int)register0x00002008 + 0x11a));
  FUN_00010326();
  func_0x0000ff28();
  FUN_00010cae();
  FUN_00010bae(2);
  FUN_00010ab2(2);
  FUN_000106b6();
  if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

