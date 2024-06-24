/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_inq_test_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void rw_inq_test_init(u32 txpwr,u32 hoppe,u32 freq,u32 edr,u32 type,u32 length,u32 et_mask)

{
  undefined8 *in_a0;
  int in_a5;
  undefined8 unaff_fs0;
  undefined8 in_fa4;
  u32 bchh;
  u32 bchl;
  
  *in_a0 = unaff_fs0;
  *(undefined8 *)(in_a5 + 0x3c) = in_fa4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

