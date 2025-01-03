/*
 * Last changed at upstream commit 1e3487dc778d48c15229af05ce0f03f78e15528c
 * https://github.com/espressif/esp-phy-lib/commit/1e3487dc778d48c15229af05ce0f03f78e15528c
 * Upstream date: 2025-01-03 11:45:24 +0800
 * Upstream subject: support h2 eco5 test
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_restart_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_restart_set(void)

{
  _DAT_600a2888 = _DAT_600a2888 & 0xefffffff;
  _DAT_600a28bc = _DAT_600a28bc | 0x80000000;
  _DAT_600a2884 = _DAT_600a2884 & 0xffffff | 0xf4000000;
  _DAT_600a28e0 = 0x14141414;
  _DAT_600a28e4 = 0x19ececec;
  _DAT_600a28ec = 0x2d2dd3d3;
  _DAT_600a28f0 = _DAT_600a28f0 & 0xffff | 0xa6a60000;
  _DAT_600a28e8 = _DAT_600a28e8 & 0x3ff | 0xece70c00;
  _DAT_600a28dc = _DAT_600a28dc & 0xfffe0003 | 0x1001b6d8;
  return;
}

