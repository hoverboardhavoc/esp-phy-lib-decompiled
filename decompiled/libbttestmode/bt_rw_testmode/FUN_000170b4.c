/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> FUN_000170b4
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016fd2) */

void FUN_000170b4(undefined8 *param_1,int param_2,undefined8 uRam00000020)

{
  int unaff_s0;
  int unaff_s1;
  undefined8 in_ft0;
  undefined8 uVar1;
  undefined4 *in_stack_0000004c;
  
  *(int *)unaff_s0 = unaff_s0;
  if (param_2 == 0) {
    *(undefined8 *)(in_stack_0000004c + 0x12) = in_ft0;
    *(int *)unaff_s0 = unaff_s0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  tp = tp + 0xe;
  if (unaff_s0 != 0) {
    if (unaff_s1 == 0) {
      uVar1 = *(undefined8 *)(unaff_s0 + 0x80);
      *in_stack_0000004c = 0;
      FUN_00017094(in_stack_0000004c + 0x68,in_stack_0000004c[0xb],in_stack_0000004c[0x1b],
                   in_stack_0000004c + 0x81,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000020 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

