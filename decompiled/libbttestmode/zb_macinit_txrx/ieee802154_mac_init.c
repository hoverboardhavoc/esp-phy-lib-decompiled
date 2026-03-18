/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
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
  _DAT_600c3070 = _DAT_600c3070 & 0xfffffc00 | 0x1ef;
  _DAT_600c3060 = _DAT_600c3060 | 0x1fff;
  _DAT_600c3068 = _DAT_600c3068 & 0x80000000 | 0x7fffffff;
  _DAT_600c3078 = _DAT_600c3078 | 0x7fffffff;
  return;
}

