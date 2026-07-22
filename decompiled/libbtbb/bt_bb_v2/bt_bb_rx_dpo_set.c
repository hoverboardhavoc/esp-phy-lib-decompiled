/*
 * Last changed at upstream commit 5695f4f38108658bc4a33e4712c1ebcb34911434
 * https://github.com/espressif/esp-phy-lib/commit/5695f4f38108658bc4a33e4712c1ebcb34911434
 * Upstream date: 2026-07-22 11:10:34 +0800
 * Upstream subject: update s31,C6 for track
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_dpo_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_dpo_set(void)

{
  _DAT_201021c4 = _DAT_201021c4 & 0xfc07ffff | 0x600000;
  return;
}

