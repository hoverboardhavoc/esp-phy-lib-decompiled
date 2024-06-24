/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_testmode_lc_model_master
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BT_testmode_lc_model_master(void)

{
  int iVar1;
  int *in_a0;
  int iVar2;
  int in_a2;
  int iVar3;
  undefined4 uVar4;
  int in_a3;
  int in_a5;
  int unaff_s6;
  undefined4 in_fa5;
  undefined4 in_register_0000307c;
  undefined4 in_fa6;
  undefined4 unaff_fs2;
  link_supervision_struct link_supervision_core;
  
  iVar1 = *in_a0;
  *(undefined4 *)(in_a3 + 0xfc) = unaff_fs2;
  if (in_a2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_a5 == 0) {
    *(int *)(iVar1 + 0x40) = iVar1;
    uRam00000000 = CONCAT44(in_register_0000307c,in_fa5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = in_a3 + 0x210;
  iVar2 = FUN_00018bfc((uint)in_a0 & 8,uRam00000080,*(undefined8 *)(in_a0 + 4));
  if (iVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(in_a3 + -0x84) = in_fa6;
  uVar4 = *(undefined4 *)(iVar3 + 0x24);
  iVar1 = FUN_00019440(*(undefined8 *)(iVar1 + 0x20));
  *(undefined8 *)(in_a3 + -0x170) = *(undefined8 *)(iVar1 + 0x30);
  *(undefined4 *)(in_a3 + -0x84) = in_fa5;
  *(undefined4 *)(in_a3 + -0x178) = uVar4;
  *(undefined8 *)(*(ushort *)(unaff_s6 + -5) + 0x18) = *(undefined8 *)(in_a3 + -0x148);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

