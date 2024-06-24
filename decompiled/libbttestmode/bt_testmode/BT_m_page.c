/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_m_page
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

u32 BT_m_page(u32 hoppe_en,u32 clk_debug,u32 lt_addr)

{
  int unaff_s0;
  undefined4 unaff_s1;
  undefined8 *in_a0;
  int in_a2;
  int in_a5;
  
  if (in_a5 == 0) {
    *(undefined4 *)(*(int *)(unaff_s0 + 4) + 0x40) = unaff_s1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(in_a2 + 0x88) = *in_a0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

