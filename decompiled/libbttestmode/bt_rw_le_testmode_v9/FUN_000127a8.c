/*
 * Last changed at upstream commit 218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * https://github.com/espressif/esp-phy-lib/commit/218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * Upstream date: 2025-10-28 15:27:17 +0800
 * Upstream subject: update C3 S3 C2 S2 libphy for rxdc opt
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> FUN_000127a8
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000127a8(int param_1)

{
  int unaff_s1;
  undefined8 unaff_fs0;
  int iStack00000000;
  
  FUN_0001279c();
  FUN_000127a0();
  FUN_000127a4();
  FUN_000127a8();
  FUN_000127ac();
  *(undefined8 *)(unaff_s1 + 0x3c) = unaff_fs0;
  if (param_1 == 0) {
    iStack00000000 = param_1;
    FUN_000127b8();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

