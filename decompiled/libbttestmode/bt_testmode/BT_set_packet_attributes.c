/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_set_packet_attributes
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00012140) */
/* WARNING: Unknown calling convention */

void BT_set_packet_attributes
               (u32 type_code,u32 link_type,u32 payload_header_len,u32 payload1_header_len,
               u32 payload_len,u32 device_sel)

{
  undefined8 *in_a0;
  int in_a5;
  undefined8 unaff_fs0;
  undefined4 in_fa1;
  undefined8 in_fa4;
  int in_stack_0000004c;
  
  *in_a0 = unaff_fs0;
  if (in_a5 == 0) {
    *(undefined8 *)(in_stack_0000004c + 0xc0) = in_fa4;
    *(undefined4 *)(in_stack_0000004c + 0xfc) = in_fa1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

