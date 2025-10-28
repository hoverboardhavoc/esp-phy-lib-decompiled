/*
 * Last changed at upstream commit 218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * https://github.com/espressif/esp-phy-lib/commit/218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * Upstream date: 2025-10-28 15:27:17 +0800
 * Upstream subject: update C3 S3 C2 S2 libphy for rxdc opt
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> FUN_000127c0
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000127c0(int param_1)

{
  if (param_1 == 0) {
    FUN_000127b8();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

