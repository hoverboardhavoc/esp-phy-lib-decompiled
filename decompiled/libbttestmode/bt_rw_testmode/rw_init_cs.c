/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_init_cs
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void rw_init_cs(u32 format,u32 ltaddr,u32 edr,u32 whdsb,u32 bdaddrl,u32 bdaddrh,u32 bchl,u32 bchh,
               u32 txpwr,u32 hoppe_en,u32 freq,u32 tx_eir,u32 rxwide,u32 rxwinsz,u32 txdesc,
               u32 maxfrmtime,u32 rxthr)

{
  undefined4 unaff_s0;
  int unaff_s1;
  int in_a0;
  int in_a5;
  undefined8 in_fa4;
  
  *(undefined4 *)(in_a0 + 0x20) = unaff_s0;
  *(undefined8 *)(in_a5 + 0x3c) = in_fa4;
  if (unaff_s1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

