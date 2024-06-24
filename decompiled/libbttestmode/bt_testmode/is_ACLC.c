/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> is_ACLC
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Unknown calling convention */

u32 is_ACLC(void)

{
  u32 uVar1;
  undefined4 in_ft11;
  int in_stack_0000004c;
  
  *(undefined4 *)(in_stack_0000004c + 0xfc) = in_ft11;
  *(undefined4 *)(in_stack_0000004c + 0x44) = 0;
  uVar1 = (*(code *)0x0)(in_stack_0000004c + 0xb0);
  return uVar1;
}

