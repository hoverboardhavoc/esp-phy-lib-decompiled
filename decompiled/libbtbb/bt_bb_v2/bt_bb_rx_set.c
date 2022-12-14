/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_set(uint param_1)

{
  _DAT_600a2050 = _DAT_600a2050 & 0xfffff800;
  _DAT_600a2008 = (param_1 & 0x3f) << 0x17 | _DAT_600a2008 & 0xe07fffff;
  _DAT_600a200c = _DAT_600a200c & 0xfff | 0x199a000;
  _DAT_600a4c24 = _DAT_600a4c24 & 0x7fffffff;
  _DAT_600a204c = _DAT_600a204c | 4;
  bt_agc_v2_set();
  _DAT_600a2888 = _DAT_600a2888 & 0xdfffffff | 0x40000;
  _DAT_600a20bc = _DAT_600a20bc | 0x80000000;
  _DAT_600a20c0 = _DAT_600a20c0 & 0xfffffffd;
  _DAT_600a2800 = _DAT_600a2800 | 0xe1c00;
  _DAT_600a284c = _DAT_600a284c & 0xfbffffff;
  _DAT_600a288c = _DAT_600a288c & 0xdfffffff;
  _DAT_600a2054 = _DAT_600a2054 & 0xffffffe0 | 0x14;
  _DAT_600a2000 = _DAT_600a2000 | 1;
  _DAT_600a2c0c = _DAT_600a2c0c & 0xfffffeff;
  _DAT_600a2c00 = _DAT_600a2c00 & 0xfff | 0x199a000;
  _DAT_600a2c04 = _DAT_600a2c04 & 0xfffff7ff;
  return;
}

