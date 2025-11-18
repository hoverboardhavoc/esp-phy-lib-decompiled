/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbttestmode -> zb_macinit_txrx.o -> ieee802154_mac_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_mac_init(void)

{
  _DAT_600c30c4 = _DAT_600c30c4 & 0xfffffff0 | 0xb;
  _DAT_600c3004 = 0x1a080080;
  _DAT_600c3048 = 0xb;
  _DAT_600c3054 = _DAT_600c3054 | 0x2000;
  _DAT_600c3070 = _DAT_600c3070 | 0xff;
  _DAT_600c3060 = _DAT_600c3060 | 0x1fff;
  _DAT_600c3068 = _DAT_600c3068 & 0x80000000 | 0x7fffffff;
  _DAT_600c3078 = _DAT_600c3078 | 0x7fffffff;
  return;
}

