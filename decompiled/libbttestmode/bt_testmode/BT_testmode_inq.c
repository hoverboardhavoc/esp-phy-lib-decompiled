/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_testmode_inq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

u32 BT_testmode_inq(u32 *nap,u32 *uap,u32 *lap,u32 *clk27_2,u32 *clkn,u32 *cod)

{
  undefined8 *in_a0;
  int in_a3;
  undefined8 unaff_fs0;
  undefined4 unaff_fs10;
  
  *in_a0 = unaff_fs0;
  *(undefined4 *)(in_a3 + 0xfc) = unaff_fs10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

