/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_v2_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_v2_set(void)

{
  _DAT_600a2058 = _DAT_600a2058 | 0xc;
  _DAT_600a2854 = _DAT_600a2854 | 1;
  _DAT_600a282c = _DAT_600a282c & 0xfffff01f | 0x140;
  _DAT_600a2828 = _DAT_600a2828 & 0xf0003f80 | 0x4628032;
  _DAT_600a28c8 = _DAT_600a28c8 & 0x80001fff | 0x7db4c000;
  _DAT_600a28d0 = _DAT_600a28d0 & 0xf | 0x3c5050a0;
  _DAT_600a28d4 = _DAT_600a28d4 & 0x3f | 0x1409c400;
  return;
}

