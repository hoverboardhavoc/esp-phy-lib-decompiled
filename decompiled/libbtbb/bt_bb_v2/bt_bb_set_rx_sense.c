/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_set_rx_sense
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_set_rx_sense(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    _DAT_201028a0 = _DAT_201028a0 & 0xff00ffff | 0x9c0000;
    _DAT_201028a8 = _DAT_201028a8 & 0xfe01f00f | 0x1380880;
    _DAT_201028b8 = _DAT_201028b8 & 0xfff00fff | 0x88000;
    return;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      _DAT_201028a8 = _DAT_201028a8 & 0xfe01ffff;
      uVar1 = param_3 << 0x11;
    }
    else {
      if (1 < (param_2 - 2U & 0xff)) {
        if (param_2 != 4) {
          return;
        }
        _DAT_201028b8 = param_3 << 0xc | _DAT_201028b8 & 0xfff00fff;
        return;
      }
      _DAT_201028a8 = _DAT_201028a8 & 0xfffff00f;
      uVar1 = param_3 << 4;
    }
    _DAT_201028a8 = uVar1 | _DAT_201028a8;
    return;
  }
  _DAT_201028a0 = param_3 << 0x10 | _DAT_201028a0 & 0xff00ffff;
  return;
}

