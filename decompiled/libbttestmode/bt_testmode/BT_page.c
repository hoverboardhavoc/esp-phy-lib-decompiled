/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_page
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void BT_page(u32 hoppe_en,u32 mulap,u32 mnap,u32 sulap,u32 snap,u32 clk_offset)

{
  int unaff_s1;
  undefined8 *in_a0;
  undefined8 *in_a2;
  int in_a4;
  int in_a5;
  undefined8 unaff_fs0;
  undefined8 in_fa0;
  undefined8 in_fa1;
  undefined8 in_fa2;
  undefined8 in_fa5;
  
  while (*in_a0 = unaff_fs0, in_a5 != 0) {
    in_a2[9] = in_fa0;
    in_a2[0x11] = in_fa0;
    in_a2[9] = in_fa0;
    in_a2[9] = in_fa1;
    in_a2[9] = in_fa2;
    in_fa2 = *(undefined8 *)(in_a4 + 0x48);
    in_a2[9] = in_fa5;
    *in_a2 = in_fa5;
  }
  if (unaff_s1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

