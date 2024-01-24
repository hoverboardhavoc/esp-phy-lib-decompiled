/*
 * Last changed at upstream commit cb8e32f9415a731981c50c3f9586f52b8ed8e26c
 * https://github.com/espressif/esp-phy-lib/commit/cb8e32f9415a731981c50c3f9586f52b8ed8e26c
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix C2 BLE CCA bug
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_intr_dis
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_intr_dis(uint param_1)

{
  _DAT_60046084 = ~param_1 & _DAT_60046084;
  return;
}

