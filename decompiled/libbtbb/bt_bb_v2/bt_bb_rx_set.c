/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_set(uint param_1)

{
  _DAT_20102170 = (param_1 & 0x3f) << 6 | _DAT_20102170 & 0xfffff03f;
  _DAT_2010200c = _DAT_2010200c & 0xfff | 0x199a000;
  _DAT_20104c24 = _DAT_20104c24 & 0x7fffffff;
  _DAT_2010204c = _DAT_2010204c | 4;
  bt_agc_v2_set();
  _DAT_20102888 = _DAT_20102888 & 0xdfffffff | 0x40000;
  _DAT_201020bc = _DAT_201020bc | 0x80000000;
  _DAT_20102800 = _DAT_20102800 | 0xe1c00;
  _DAT_201020c0 = _DAT_201020c0 & 0xfffffffd | 1;
  _DAT_2010284c = _DAT_2010284c & 0xfbffffff;
  _DAT_2010288c = _DAT_2010288c & 0xdfffffff;
  _DAT_20102000 = _DAT_20102000 | 1;
  _DAT_20102c00 = _DAT_20102c00 & 0xfff | 0x1cb000;
  _DAT_20102c0c = _DAT_20102c0c & 0xfffffefc;
  return;
}

