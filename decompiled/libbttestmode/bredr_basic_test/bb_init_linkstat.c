/*
 * Last changed at upstream commit 20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * https://github.com/espressif/esp-phy-lib/commit/20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * Upstream date: 2026-09-24 11:57:44 +0800
 * Upstream subject: fix S31 bod rst
 * Source: libbttestmode -> bredr_basic_test.o -> bb_init_linkstat
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 * bb_init_linkstat(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfff00000 | 0x4761;
  }
  return linkstat_table;
}

