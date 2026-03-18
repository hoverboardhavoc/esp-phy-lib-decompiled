/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_v2_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_v2_set(void)

{
  _DAT_600c2058 = _DAT_600c2058 | 0xc;
  _DAT_600c2854 = _DAT_600c2854 | 1;
  _DAT_600c282c = _DAT_600c282c & 0xfffff01f | 0x140;
  _DAT_600c2828 = _DAT_600c2828 & 0xf01fff80 | 0x460002b;
  _DAT_600c28c8 = _DAT_600c28c8 & 0x80001fff | 0x7db4c000;
  _DAT_600c28d0 = _DAT_600c28d0 & 0xf | 0x3c5050a0;
  _DAT_600c28d4 = _DAT_600c28d4 & 0x3f | 0x1409c400;
  _DAT_600c2860 = _DAT_600c2860 & 0xff00 | 0x32ce00be;
  _DAT_600c2898 = _DAT_600c2898 & 0xffff81ff | 0x1f8e00;
  return;
}

