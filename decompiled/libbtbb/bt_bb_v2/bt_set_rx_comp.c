/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbtbb -> bt_bb_v2.o -> bt_set_rx_comp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_set_rx_comp(uint param_1)

{
  _DAT_20102844 = (param_1 & 0x7f) << 7 | _DAT_20102844 & 0xe0000000 | param_1 & 0x7f | 0x6020000;
  _DAT_20102848 = _DAT_20102848 & 0xfffffc00 | 0x84;
  return;
}

