/*
 * Last changed at upstream commit 1e3487dc778d48c15229af05ce0f03f78e15528c
 * https://github.com/espressif/esp-phy-lib/commit/1e3487dc778d48c15229af05ce0f03f78e15528c
 * Upstream date: 2025-01-03 11:45:24 +0800
 * Upstream subject: support h2 eco5 test
 * Source: libbtbb -> bt_bb_v2.o -> zb_txon_delay_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_txon_delay_set(void)

{
  _DAT_600a3104 = _DAT_600a3104 & 0xfffffc00 | 0x23;
  _DAT_600a3110 = _DAT_600a3110 & 0xfffff800 | 0x32;
  _DAT_600a3114 = _DAT_600a3114 & 0xfffffc00 | 0x7f;
  _DAT_600a310c = _DAT_600a310c & 0xffffffc0;
  return;
}

