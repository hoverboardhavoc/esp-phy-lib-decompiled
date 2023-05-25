/*
 * Last changed at upstream commit 9491d17bb2f9711cc83a4cfdafcb0326366fc630
 * https://github.com/espressif/esp-phy-lib/commit/9491d17bb2f9711cc83a4cfdafcb0326366fc630
 * Upstream date: 2023-05-25 15:45:13 +0800
 * Upstream subject: C2 libphy for disconnection in low temperature * phy_version: 0, 230, 926985f, May 18 2023, 11:39:32
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_isr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_isr(void)

{
  if ((_DAT_60046084 << 0x12 < 0) && (_DAT_6004608c << 0x12 < 0)) {
    _DAT_60046090 = _DAT_60046090 | 0x2000;
    phy_set_ble_complex(0);
    return;
  }
  return;
}

