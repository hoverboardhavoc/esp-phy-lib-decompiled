/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_le_common.o -> LE_rx_per
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00010c44) */
/* WARNING: Unknown calling convention */

void LE_rx_per(u32 chan_id,u32 type)

{
  undefined4 uVar1;
  undefined4 unaff_s1;
  int in_a0;
  int iVar2;
  int extraout_a1;
  int in_a2;
  undefined8 *in_a4;
  int in_a5;
  undefined8 unaff_fs1;
  undefined8 uVar3;
  undefined4 uStack00000000;
  undefined1 *puStack00000048;
  u32 noise_filted_1m;
  u32 noise_average_1m;
  u32 noise_min_1m;
  
  *(undefined4 *)(in_a0 + 0x38) = unaff_s1;
  *(undefined4 *)(in_a0 + 0x18) = unaff_s1;
  *(undefined8 *)(in_a0 + 0x38) = unaff_fs1;
  uVar1 = 0x10c40;
  iVar2 = FUN_00010cc6();
  if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = *(undefined8 *)(iVar2 + 0xc0);
  if (in_a5 != 0) {
    FUN_0001051c();
    *(undefined8 *)(in_a2 + 0x60) = uVar3;
    FUN_00010532();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (extraout_a1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puStack00000048 = &stack0x00000008;
  if (&stack0x00000000 == (undefined4 *)0xfffffff8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack00000000 = uVar1;
  FUN_00010588(&stack0x0000038c,*in_a4,*(undefined8 *)(in_a2 + 0x40));
  return;
}

