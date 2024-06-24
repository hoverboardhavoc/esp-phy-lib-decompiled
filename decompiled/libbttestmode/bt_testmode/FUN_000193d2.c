/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> FUN_000193d2
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Control flow encountered unimplemented instructions */

void FUN_000193d2(int *param_1,undefined8 *param_2,int param_3,int param_4,undefined8 param_5,
                 undefined4 param_6,undefined8 uRam00000080)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_s6;
  undefined4 uVar5;
  undefined4 unaff_fs2;
  
  uVar5 = (undefined4)param_5;
  *param_2 = param_5;
  iVar1 = *param_1;
  *(undefined4 *)(param_3 + 0xfc) = unaff_fs2;
  if (param_2 != (undefined8 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_4 == 0) {
    *(int *)(iVar1 + 0x40) = iVar1;
    uRam00000000 = param_5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = param_3 + 0x210;
  iVar2 = FUN_00018bfc((uint)param_1 & 8,uRam00000080,*(undefined8 *)(param_1 + 4));
  if (iVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(param_3 + -0x84) = param_6;
  uVar4 = *(undefined4 *)(iVar3 + 0x24);
  iVar1 = FUN_00019440(*(undefined8 *)(iVar1 + 0x20));
  *(undefined8 *)(param_3 + -0x170) = *(undefined8 *)(iVar1 + 0x30);
  *(undefined4 *)(param_3 + -0x84) = uVar5;
  *(undefined4 *)(param_3 + -0x178) = uVar4;
  *(undefined8 *)(*(ushort *)(unaff_s6 + -5) + 0x18) = *(undefined8 *)(param_3 + -0x148);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

