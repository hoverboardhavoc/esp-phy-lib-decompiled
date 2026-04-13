/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> ieee802154_txon_delay_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_txon_delay_set(void)

{
  _DAT_20103104 = _DAT_20103104 & 0xfffffc00 | 0x2d;
  _DAT_20103110 = _DAT_20103110 & 0xfffff800 | 0x32;
  _DAT_20103114 = _DAT_20103114 & 0xfffffc00 | 0x75;
  _DAT_2010310c = _DAT_2010310c & 0xffffffc0 | 5;
  return;
}

