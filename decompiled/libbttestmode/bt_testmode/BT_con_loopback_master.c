/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_con_loopback_master
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void BT_con_loopback_master(u32 loopback)

{
  undefined4 unaff_s0;
  int unaff_s1;
  int in_a0;
  undefined8 in_ft0;
  undefined8 unaff_fs0;
  undefined4 unaff_fs11;
  int in_stack_0000004c;
  
  *(undefined8 *)(in_a0 + 0x20) = unaff_fs0;
  *(undefined4 *)(in_stack_0000004c + 0xfc) = unaff_fs11;
  *(undefined8 *)(in_stack_0000004c + 0x1d8) = in_ft0;
  *(undefined4 *)unaff_s0 = unaff_s0;
  if (unaff_s1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

