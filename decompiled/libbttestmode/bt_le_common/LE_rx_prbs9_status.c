/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_le_common.o -> LE_rx_prbs9_status
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void LE_rx_prbs9_status(u32 *total_bits,u32 *err_bits,u32 type)

{
  int iVar1;
  int unaff_s1;
  int in_a0;
  int in_a2;
  int in_a5;
  undefined4 in_ft8;
  int in_stack_0000004c;
  
  do {
    iVar1 = *(int *)(in_a0 + 0x20);
  } while (in_a5 != 0);
  *(undefined8 *)(iVar1 + 0x10) = *(undefined8 *)(unaff_s1 + 0x80);
  if (iVar1 != 0) {
    *(int *)(in_a2 + 0xc) = unaff_s1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(in_stack_0000004c + 0xfc) = in_ft8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

