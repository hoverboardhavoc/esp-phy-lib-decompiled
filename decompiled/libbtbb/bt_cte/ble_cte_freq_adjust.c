/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbtbb -> bt_cte.o -> ble_cte_freq_adjust
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_cte_freq_adjust(int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  if (param_1 == 0) {
    _DAT_600c215c = _DAT_600c215c & 0xfffffffb;
  }
  else {
    _DAT_600c215c = _DAT_600c215c | 4;
  }
  if (param_2 == 0) {
    _DAT_600c215c = _DAT_600c215c & 0xfffffff7;
  }
  else {
    _DAT_600c215c = _DAT_600c215c | 8;
  }
  _DAT_600c215c = (param_4 & 0x3f) << 4 | _DAT_600c215c & 0xc0f | param_3 << 0xc;
  _DAT_600c21b0 = (param_6 & 0x3f) << 6 | _DAT_600c21b0 & 0x3f | param_5 << 0xc;
  return;
}

