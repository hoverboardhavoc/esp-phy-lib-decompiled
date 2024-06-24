/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_rx_content_status
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void BT_rx_content_status(u32 *total_bits,u32 *err_bits,u32 data_type)

{
  int unaff_s0;
  int *piVar1;
  undefined1 *in_a3;
  int in_a4;
  int in_a5;
  undefined4 in_fa6;
  undefined4 in_ft10;
  u32 last_mask;
  
  piVar1 = (int *)FUN_00012f84();
  *(undefined4 *)(in_a3 + 0xfc) = in_ft10;
  if (in_a5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    if (unaff_s0 != 0) {
      *(undefined4 *)(in_a3 + 0xbc) = in_fa6;
      if (in_a3 != (undefined1 *)0xfffffff8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_a3 = *(undefined1 **)((int)in_a3 + 0x4c);
    do {
      unaff_s0 = *piVar1;
    } while (in_a5 != 0);
  } while (in_a4 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

