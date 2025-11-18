/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_set(int param_1)

{
  _DAT_600c2050 = _DAT_600c2050 & 0xfffff800;
  _DAT_600c2170 = _DAT_600c2170 & 0x3ffffff | param_1 << 0x1a;
  _DAT_600c200c = _DAT_600c200c & 0xfff | 0x4000000;
  _DAT_600c4c24 = _DAT_600c4c24 & 0x7fffffff;
  _DAT_600c204c = _DAT_600c204c | 4;
  bt_agc_v2_set();
  _DAT_600c2888 = _DAT_600c2888 & 0xdfffffff | 0x40000;
  _DAT_600c20bc = _DAT_600c20bc | 0x80000000;
  _DAT_600c20c0 = _DAT_600c20c0 & 0xfffffffd;
  _DAT_600c2800 = _DAT_600c2800 | 0xe1c00;
  _DAT_600c284c = _DAT_600c284c & 0xfbffffff;
  _DAT_600c288c = _DAT_600c288c & 0xdfffffff;
  _DAT_600c2054 = _DAT_600c2054 & 0xffffffe0 | 0xc;
  _DAT_600c2000 = _DAT_600c2000 | 1;
  _DAT_600c2c00 = _DAT_600c2c00 & 0xfff | 0x400000;
  _DAT_600c2c04 = _DAT_600c2c04 & 0xfffff7ff;
  _DAT_600c2c0c = _DAT_600c2c0c & 0xfffffeff | 3;
  return;
}

