/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> t1_toggle_check_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void t1_toggle_check_rx(void)

{
  undefined4 in_t0;
  undefined4 unaff_s0;
  int unaff_s1;
  undefined8 *in_a0;
  int in_a1;
  undefined8 uVar1;
  undefined4 *in_stack_0000004c;
  
  uVar1 = *in_a0;
  custom3.rd.rs1.rs2(in_t0,gp);
  *(undefined4 *)unaff_s0 = unaff_s0;
  if (in_a1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  tp = tp + 0xe;
  if (in_stack_0000004c == (undefined4 *)0xfffffff8) {
    uRam00000020 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_s1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_stack_0000004c = 0;
  FUN_00017094(in_stack_0000004c + 0x68,in_stack_0000004c[0xb],in_stack_0000004c[0x1b],
               in_stack_0000004c + 0x81,*(undefined8 *)(in_stack_0000004c + 0x22));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

