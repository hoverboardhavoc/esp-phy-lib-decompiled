/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_pcntl_fsm_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rw_pcntl_fsm_print(void)

{
  u32 pcntl_fsm_data;
  undefined4 unaff_s0;
  undefined4 *unaff_s1;
  undefined8 in_ft0;
  undefined4 in_fa6;
  int in_stack_0000004c;
  
  *(undefined4 *)(in_stack_0000004c + 0xfc) = in_fa6;
  *(undefined8 *)(in_stack_0000004c + 0x40) = in_ft0;
  *unaff_s1 = unaff_s0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

