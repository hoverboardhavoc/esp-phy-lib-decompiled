/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbtbb -> bt_bb_v2.o -> ieee802154_set_rx_sense
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x0001036a) */
/* WARNING: Removing unreachable block (ram,0x000102ea) */
/* WARNING: Removing unreachable block (ram,0x00010330) */
/* WARNING: Removing unreachable block (ram,0x0001030a) */
/* WARNING: Removing unreachable block (ram,0x0001031c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_set_rx_sense(int param_1,int param_2)

{
  if (param_1 == 0) {
    _DAT_600c28a0 = _DAT_600c28a0 & 0xff00ffff | 0x970000;
    _DAT_600c28a8 = _DAT_600c28a8 & 0xfe01f00f | 0x12e0880;
    _DAT_600c28b8 = _DAT_600c28b8 & 0xfff00fff | 0x88000;
    return;
  }
  _DAT_600c28b8 = param_2 << 0xc | _DAT_600c28b8 & 0xfff00fff;
  return;
}

