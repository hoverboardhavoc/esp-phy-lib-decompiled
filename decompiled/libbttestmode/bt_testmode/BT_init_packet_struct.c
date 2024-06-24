/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> BT_init_packet_struct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BT_init_packet_struct(void)

{
  int iVar1;
  int in_a0;
  undefined8 *in_a2;
  int in_a5;
  undefined8 in_fa0;
  
  while( true ) {
    register0x00002008 = *(BADSPACEBASE **)((int)register0x00002008 + 0x4c);
    iVar1 = *(int *)(in_a0 + 0x20);
    if (in_a5 == 0) break;
    *in_a2 = in_fa0;
  }
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00010420(in_a0 + 0x1a,(undefined1 *)((int)register0x00002008 + 0x11a));
  FUN_00010326();
  func_0x0000ff28();
  FUN_00010cae();
  FUN_00010bae(2);
  FUN_00010ab2(2);
  FUN_000106b6();
  if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

