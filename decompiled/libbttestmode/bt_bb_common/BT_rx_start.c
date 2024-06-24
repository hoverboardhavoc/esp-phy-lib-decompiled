/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_bb_common.o -> BT_rx_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void BT_rx_start(uint16 data_rate,uint16 freq_offset_500k,uint16 start,uint16 bit_len,uint16 freq)

{
  undefined2 unaff_0000200a;
  int iVar1;
  undefined4 unaff_s0;
  int unaff_s1;
  undefined8 *in_a2;
  int in_a3;
  int in_a5;
  undefined4 unaff_s2;
  undefined8 unaff_fs0;
  
  iVar1 = *(int *)(CONCAT22(unaff_0000200a,data_rate) + 0x4c);
  *in_a2 = unaff_fs0;
  *(undefined4 *)(in_a3 + 0x60) = unaff_s0;
  if (in_a3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(iVar1 + 0x40) = unaff_s2;
  *(undefined8 *)(iVar1 + 0x18) = *(undefined8 *)(unaff_s1 + 0x80);
  if (in_a5 == 0) {
    if (in_a3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

