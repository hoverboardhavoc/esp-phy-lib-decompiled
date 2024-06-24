/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> bt_force_tx_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void bt_force_tx_tone(u32 start,u32 bt_chan,u32 power)

{
  int unaff_s0;
  int in_a5;
  undefined4 in_ft6;
  undefined8 unaff_fs0;
  undefined4 *in_stack_0000004c;
  
  *(undefined8 *)(unaff_s0 + 0x18) = unaff_fs0;
  if (in_a5 == 0) {
    FUN_000172c0(in_stack_0000004c + 0x42,in_stack_0000004c + 0x6c);
    return;
  }
  *in_stack_0000004c = in_ft6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

