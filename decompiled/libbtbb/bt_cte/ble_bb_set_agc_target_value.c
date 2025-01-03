/*
 * Last changed at upstream commit 1e3487dc778d48c15229af05ce0f03f78e15528c
 * https://github.com/espressif/esp-phy-lib/commit/1e3487dc778d48c15229af05ce0f03f78e15528c
 * Upstream date: 2025-01-03 11:45:24 +0800
 * Upstream subject: support h2 eco5 test
 * Source: libbtbb -> bt_cte.o -> ble_bb_set_agc_target_value
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_bb_set_agc_target_value(uint param_1)

{
  _DAT_600a2840 = (param_1 & 0x1ff) << 0xd | _DAT_600a2840 & 0xffc01fff;
  return;
}

