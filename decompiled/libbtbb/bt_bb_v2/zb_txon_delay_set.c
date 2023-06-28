/*
 * Last changed at upstream commit 97a141a563a4b752f5943d0049aa691038d08613
 * https://github.com/espressif/esp-phy-lib/commit/97a141a563a4b752f5943d0049aa691038d08613
 * Upstream date: 2023-06-28 11:18:04 +0800
 * Upstream subject: h2: optimize track pll when temperature changes. fix ramp up and ramp down timing.
 * Source: libbtbb -> bt_bb_v2.o -> zb_txon_delay_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_txon_delay_set(void)

{
  _DAT_600a3104 = _DAT_600a3104 & 0xfffffc00 | 0x28;
  _DAT_600a3110 = _DAT_600a3110 & 0xfffff800 | 0x32;
  _DAT_600a3114 = _DAT_600a3114 & 0xfffffc00 | 0x7a;
  _DAT_600a310c = _DAT_600a310c & 0xffffffc0 | 1;
  return;
}

