/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> fcc_tx_len
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void fcc_tx_len(u32 txpwr,u32 hoppe,u32 chan,u32 rate,u32 length,u32 data_type,u32 tx_num_in)

{
  int unaff_s1;
  undefined4 uVar1;
  uint in_a2;
  int in_a3;
  undefined8 in_fa5;
  
  *(int *)(unaff_s1 + 0x54) = in_a3 + 0x240;
  uVar1 = *(undefined4 *)(unaff_s1 + 4);
  *(int *)(in_a3 + 0x25c) = in_a3 + 0x240;
  FUN_000174a2(uVar1,in_a2 & 4,*(undefined8 *)(in_a3 + 0x48));
  *(undefined8 *)(in_a3 + 0x268) = in_fa5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

