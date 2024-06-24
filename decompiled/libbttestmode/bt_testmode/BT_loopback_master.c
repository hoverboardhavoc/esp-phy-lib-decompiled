/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_loopback_master
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void BT_loopback_master(u32 loopback,uint16 freq_offset_500k,uint16 freq,u32 link_type,u32 nowhite)

{
  undefined2 freq_offset_500k_2;
  int unaff_s1;
  undefined8 in_fa2;
  u32 *in_stack_0000004c;
  
  *(undefined8 *)(unaff_s1 + 0x68) = in_fa2;
  BT_rx_prbs9_status(in_stack_0000004c,_freq_offset_500k);
  return;
}

