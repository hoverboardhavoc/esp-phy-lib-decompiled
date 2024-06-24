/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> FUN_00014a3e
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00014a3e(int param_1,uint param_2,int param_3,int param_4,undefined8 uRam00000058)

{
  undefined4 unaff_s0;
  undefined8 unaff_fs0;
  
  param_2 = param_2 >> 4;
  *(undefined8 *)(param_3 + 0x78) = unaff_fs0;
  gp = 0xfffe2000;
  FUN_00014e5a(param_1 + 0x1b);
  uRam00000058 = unaff_fs0;
  tp = 2;
  if (param_2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  custom3.rs1.rs2(unaff_s0,0);
  custom3.rs1.rs2(param_4 + 0x18,0);
  custom3.rs1.rs2(0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

