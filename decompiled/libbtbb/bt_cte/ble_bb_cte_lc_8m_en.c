/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbtbb -> bt_cte.o -> ble_bb_cte_lc_8m_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_bb_cte_lc_8m_en(int param_1)

{
  if (param_1 == 0) {
    _DAT_20102094 = _DAT_20102094 & 0xfffffffe;
  }
  else {
    _DAT_20102094 = _DAT_20102094 | 1;
  }
  return;
}

