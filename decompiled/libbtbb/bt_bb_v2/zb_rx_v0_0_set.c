/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> zb_rx_v0_0_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_rx_v0_0_set(void)

{
  _DAT_600c2c18 = _DAT_600c2c18 & 0xfffff800 | 0x7a6;
  _DAT_600c2c10 = _DAT_600c2c10 & 0x1fff | 0xf254c000;
  _DAT_600c2c34 = _DAT_600c2c34 & 0x800001ff | 0x7e1fda00;
  _DAT_600c2c30 = _DAT_600c2c30 & 0xff | 0xf85edf00;
  _DAT_600c2c14 = _DAT_600c2c14 & 0xfffffffd;
  _DAT_600c2c0c = _DAT_600c2c0c & 0xffe003ff | 0x1e7200;
  _DAT_600c2c28 = _DAT_600c2c28 | 0x40000000;
  _DAT_600c2c2c = 0x7a120f6;
  return;
}

