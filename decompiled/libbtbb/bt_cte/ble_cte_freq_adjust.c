/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_cte.o -> ble_cte_freq_adjust
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_cte_freq_adjust(int param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  if (param_1 == 0) {
    _DAT_600c215c = _DAT_600c215c & 0xffffffdf;
  }
  else {
    _DAT_600c215c = _DAT_600c215c | 0x20;
  }
  _DAT_600c215c = (param_3 & 0x3f) << 6 | _DAT_600c215c & 0x3f | param_2 << 0xc;
  _DAT_600c21c0 = (param_5 & 0x3f) << 6 | _DAT_600c21c0 & 0x3f | param_4 << 0xc;
  _DAT_600c200c = (param_6 & 0x3f) << 6 | _DAT_600c200c & 0xfffff03f;
  return;
}

