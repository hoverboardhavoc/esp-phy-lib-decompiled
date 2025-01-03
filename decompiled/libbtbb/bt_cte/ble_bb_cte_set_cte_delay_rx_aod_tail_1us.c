/*
 * Last changed at upstream commit 1e3487dc778d48c15229af05ce0f03f78e15528c
 * https://github.com/espressif/esp-phy-lib/commit/1e3487dc778d48c15229af05ce0f03f78e15528c
 * Upstream date: 2025-01-03 11:45:24 +0800
 * Upstream subject: support h2 eco5 test
 * Source: libbtbb -> bt_cte.o -> ble_bb_cte_set_cte_delay_rx_aod_tail_1us
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_bb_cte_set_cte_delay_rx_aod_tail_1us(uint param_1)

{
  _DAT_600a2154 = (param_1 & 0xff) << 0x10 | _DAT_600a2154 & 0xff00ffff;
  return;
}

