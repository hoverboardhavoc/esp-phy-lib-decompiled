/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> zb_macinit_txrx.o -> ieee802154_mac_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_mac_init(void)

{
  _DAT_201030c4 = _DAT_201030c4 & 0xfffffff0 | 0xb;
  _DAT_20103004 = 0x1a080080;
  _DAT_20103048 = 0xb;
  _DAT_20103054 = _DAT_20103054 | 0x2000;
  _DAT_20103070 = _DAT_20103070 & 0xfffffc00 | 0x1ef;
  _DAT_20103060 = _DAT_20103060 | 0x3fff;
  _DAT_20103068 = _DAT_20103068 & 0x80000000 | 0x7fffffff;
  _DAT_20103078 = _DAT_20103078 | 0x7fffffff;
  return;
}

