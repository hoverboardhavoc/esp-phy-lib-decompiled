/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_rx_status_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void rw_rx_status_print(u32 desc_addr)

{
  undefined4 unaff_s0;
  int unaff_s1;
  undefined8 uVar1;
  int *in_stack_0000004c;
  
  *(undefined4 *)unaff_s0 = unaff_s0;
  uVar1 = *(undefined8 *)(unaff_s1 + 0x80);
  in_stack_0000004c[6] = (int)(in_stack_0000004c + 2);
  *in_stack_0000004c = (int)(in_stack_0000004c + 2);
  *(undefined8 *)(in_stack_0000004c + 0x5c) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

