/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_cte.o -> ble_cte_freq_adjust
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_cte_freq_adjust(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  if (param_1 == 0) {
    _DAT_2010215c = _DAT_2010215c & 0xfffffff7;
  }
  else {
    _DAT_2010215c = _DAT_2010215c | 8;
  }
  _DAT_2010215c = (param_3 & 0x3f) << 4 | _DAT_2010215c & 0xc0f | param_2 << 0xc;
  _DAT_201021b0 = (param_5 & 0x3f) << 6 | _DAT_201021b0 & 0x3f | param_4 << 0xc;
  return;
}

