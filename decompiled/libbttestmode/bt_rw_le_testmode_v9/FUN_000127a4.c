/*
 * Last changed at upstream commit 218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * https://github.com/espressif/esp-phy-lib/commit/218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * Upstream date: 2025-10-28 15:27:17 +0800
 * Upstream subject: update C3 S3 C2 S2 libphy for rxdc opt
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> FUN_000127a4
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000127a4(int param_1,unkbyte10 param_2,unkbyte10 param_3)

{
  int unaff_s1;
  undefined8 unaff_fs0;
  
  FUN_0001279c();
  FUN_000127a0();
  FUN_000127a4();
  FUN_000127a8();
  FUN_000127ac();
  *(undefined8 *)(unaff_s1 + 0x3c) = unaff_fs0;
  _DAT_0000000a = param_1;
  if (param_1 == 0) {
    FUN_000127b8();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_3._2_8_ = unaff_fs0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

