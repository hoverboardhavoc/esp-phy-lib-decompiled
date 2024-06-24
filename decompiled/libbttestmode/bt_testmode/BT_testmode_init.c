/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_testmode_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void BT_testmode_init(uint16 freq_offset_500k,uint16 freq,u32 nowhite)

{
  undefined2 unaff_0000200a;
  int iVar1;
  undefined8 *in_a0;
  int in_a3;
  undefined8 unaff_fs0;
  undefined4 in_ft9;
  
  iVar1 = *(int *)(CONCAT22(unaff_0000200a,freq_offset_500k) + 0x4c);
  *in_a0 = unaff_fs0;
  *(undefined4 *)(iVar1 + 0xfc) = in_ft9;
  if (in_a3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

