/*
 * Last changed at upstream commit 2fb71262baf38dc83591b4191731a0880bfdd3a5
 * https://github.com/espressif/esp-phy-lib/commit/2fb71262baf38dc83591b4191731a0880bfdd3a5
 * Upstream date: 2025-05-15 15:25:17 +0800
 * Upstream subject: update C5ECO2 libphy, for deep sleep and temp track bug
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
    _DAT_600a215c = _DAT_600a215c & 0xfffff7ff;
  }
  else {
    _DAT_600a215c = _DAT_600a215c | 0x800;
  }
  _DAT_600a215c = (param_3 & 0xff) << 3 | _DAT_600a215c & 0x807 | param_2 << 0xc;
  _DAT_600a21c0 = (param_5 & 0xf) << 8 | _DAT_600a21c0 & 0xff | param_4 << 0xc;
  return;
}

