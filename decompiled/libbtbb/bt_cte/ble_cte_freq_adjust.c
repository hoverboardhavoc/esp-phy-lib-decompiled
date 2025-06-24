/*
 * Last changed at upstream commit ada08d173b90188fc779ad05a75de2bb437b1a06
 * https://github.com/espressif/esp-phy-lib/commit/ada08d173b90188fc779ad05a75de2bb437b1a06
 * Upstream date: 2025-06-24 14:22:56 +0800
 * Upstream subject: support C61ECO3 sleep test
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
    _DAT_600a215c = _DAT_600a215c & 0xfffff7ff;
  }
  else {
    _DAT_600a215c = _DAT_600a215c | 0x800;
  }
  _DAT_600a215c = (param_3 & 0xff) << 3 | _DAT_600a215c & 0x807 | param_2 << 0xc;
  _DAT_600a21c0 = (param_5 & 0xf) << 8 | _DAT_600a21c0 & 0xff | param_4 << 0xc;
  _DAT_600a200c = (param_6 & 0xf) << 8 | _DAT_600a200c & 0xfffff0ff;
  return;
}

