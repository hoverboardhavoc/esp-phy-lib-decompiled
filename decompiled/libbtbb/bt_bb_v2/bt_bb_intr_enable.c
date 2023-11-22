/*
 * Last changed at upstream commit e3222517e339e9301dd7f432fa3e052cf44d325f
 * https://github.com/espressif/esp-phy-lib/commit/e3222517e339e9301dd7f432fa3e052cf44d325f
 * Upstream date: 2023-11-22 19:43:16 +0800
 * Upstream subject: fix c2 rx bug when phy_init_param_set(0)
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_intr_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_intr_enable(void)

{
  _DAT_60046094 = _DAT_60046094 | 0x80000000;
  _DAT_60046084 = _DAT_60046084 | 0x2800;
  return;
}

