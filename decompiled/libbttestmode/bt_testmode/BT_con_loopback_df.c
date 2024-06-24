/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_con_loopback_df
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

int BT_con_loopback_df(u32 device_sel)

{
  int unaff_s0;
  int unaff_s1;
  undefined8 *in_a0;
  undefined8 *in_a2;
  int in_a4;
  int in_a5;
  undefined8 in_fa5;
  undefined4 in_ft8;
  
  while( true ) {
    device_sel = *(BADSPACEBASE **)((int)device_sel + 0x4c);
    *(undefined8 *)(unaff_s0 + 0x30) = *in_a0;
    *(undefined4 *)((int)device_sel + 0xfc) = in_ft8;
    *(int *)(unaff_s0 + 0x10) = unaff_s0;
    if (in_a5 == 0) break;
    *in_a2 = in_fa5;
    *in_a2 = in_fa5;
    *in_a2 = in_fa5;
  }
  *(int *)(unaff_s1 + 4) = unaff_s0;
  *(int *)(unaff_s1 + 0x40) = unaff_s1;
  if (in_a4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

