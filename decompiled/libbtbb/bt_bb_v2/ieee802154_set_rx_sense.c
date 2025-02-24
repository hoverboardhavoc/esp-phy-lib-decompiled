/*
 * Last changed at upstream commit aa6bac1e0a83ea70fa3f03a72041efddaeb7b898
 * https://github.com/espressif/esp-phy-lib/commit/aa6bac1e0a83ea70fa3f03a72041efddaeb7b898
 * Upstream date: 2025-02-24 10:34:30 +0800
 * Upstream subject: update C5 beta5 and eco1 libphy, fix ble 2m rx and sleep rst bb fsm
 * Source: libbtbb -> bt_bb_v2.o -> ieee802154_set_rx_sense
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x0001031a) */
/* WARNING: Removing unreachable block (ram,0x0001035c) */
/* WARNING: Removing unreachable block (ram,0x000102f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_set_rx_sense(int param_1,int param_2)

{
  if (param_1 == 0) {
    _DAT_600a28a0 = _DAT_600a28a0 & 0xff00ffff | 0x9c0000;
    _DAT_600a28ac = _DAT_600a28ac & 0xf00fffff | 0x8800000;
    _DAT_600a28b8 = _DAT_600a28b8 & 0xfff00fff | 0x88000;
    return;
  }
  _DAT_600a28b8 = param_2 << 0xc | _DAT_600a28b8 & 0xfff00fff;
  return;
}

