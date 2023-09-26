/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> zb_macinit_txrx.o -> ieee802154_mac_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_mac_init(void)

{
  _DAT_600a30c4 = _DAT_600a30c4 & 0xfffffff0 | 0xb;
  _DAT_600a3004 = 0x1a080080;
  _DAT_600a3048 = 0xb;
  _DAT_600a3054 = _DAT_600a3054 | 0x2000;
  _DAT_600a3070 = _DAT_600a3070 | 0xff;
  _DAT_600a3060 = _DAT_600a3060 | 0x1fff;
  _DAT_600a3068 = _DAT_600a3068 & 0x80000000 | 0x7fffffff;
  _DAT_600a3078 = _DAT_600a3078 | 0x7fffffff;
  return;
}

