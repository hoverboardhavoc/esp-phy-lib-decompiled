/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_le_common.o -> le_tx_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void le_tx_en(u32 device_sel)

{
  int unaff_s0;
  int unaff_s1;
  undefined8 *in_a0;
  int in_a5;
  undefined4 unaff_s9;
  undefined8 unaff_fs0;
  
  *in_a0 = unaff_fs0;
  custom3.rd.rs1.rs2(unaff_s9,0);
  *(undefined8 *)(unaff_s0 + 0x30) = *(undefined8 *)(unaff_s1 + 0x80);
  if (in_a5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_s0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_s1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

