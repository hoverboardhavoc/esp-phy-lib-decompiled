/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbtbb -> bt_bb_v2.o -> ieee802154_set_rx_sense
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000102f4) */
/* WARNING: Removing unreachable block (ram,0x00010274) */
/* WARNING: Removing unreachable block (ram,0x000102ba) */
/* WARNING: Removing unreachable block (ram,0x00010294) */
/* WARNING: Removing unreachable block (ram,0x000102a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_set_rx_sense(int param_1,int param_2)

{
  if (param_1 == 0) {
    _DAT_201028a0 = _DAT_201028a0 & 0xff00ffff | 0x9c0000;
    _DAT_201028a8 = _DAT_201028a8 & 0xfe01f00f | 0x1380880;
    _DAT_201028b8 = _DAT_201028b8 & 0xfff00fff | 0x88000;
    return;
  }
  _DAT_201028b8 = param_2 << 0xc | _DAT_201028b8 & 0xfff00fff;
  return;
}

