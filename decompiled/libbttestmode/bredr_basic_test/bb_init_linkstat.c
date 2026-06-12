/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbttestmode -> bredr_basic_test.o -> bb_init_linkstat
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 * bb_init_linkstat(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfff00000 | 0x4752;
  }
  return linkstat_table;
}

