/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> GetCmd_BT_testmode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001676a) */
/* WARNING: Unknown calling convention */

u32 GetCmd_BT_testmode(void)

{
  undefined8 *in_a2;
  int in_a5;
  undefined8 in_fa1;
  undefined8 in_fa5;
  
  while (in_a5 != 0) {
    *in_a2 = in_fa5;
    in_a2[0x19] = in_fa1;
    *in_a2 = in_fa5;
    in_a2[0x19] = in_fa1;
    *in_a2 = in_fa5;
    in_a2[0x19] = in_fa1;
    *in_a2 = in_fa5;
    *in_a2 = in_fa5;
    *in_a2 = in_fa5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

