/*
 * Last changed at upstream commit aa6bac1e0a83ea70fa3f03a72041efddaeb7b898
 * https://github.com/espressif/esp-phy-lib/commit/aa6bac1e0a83ea70fa3f03a72041efddaeb7b898
 * Upstream date: 2025-02-24 10:34:30 +0800
 * Upstream subject: update C5 beta5 and eco1 libphy, fix ble 2m rx and sleep rst bb fsm
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_set_rx_sense
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_set_rx_sense(int param_1,uint param_2,int param_3)

{
  if (param_1 == 0) {
    _DAT_600a28a0 = _DAT_600a28a0 & 0xff00ffff | 0x9c0000;
    _DAT_600a28ac = _DAT_600a28ac & 0xf00fffff | 0x8800000;
    _DAT_600a28b8 = _DAT_600a28b8 & 0xfff00fff | 0x88000;
    return;
  }
  if (param_2 < 2) {
    _DAT_600a28a0 = param_3 << 0x10 | _DAT_600a28a0 & 0xff00ffff;
    return;
  }
  if ((param_2 - 2 & 0xff) < 2) {
    _DAT_600a28ac = param_3 << 0x14 | _DAT_600a28ac & 0xf00fffff;
    return;
  }
  if (param_2 != 4) {
    return;
  }
  _DAT_600a28b8 = param_3 << 0xc | _DAT_600a28b8 & 0xfff00fff;
  return;
}

