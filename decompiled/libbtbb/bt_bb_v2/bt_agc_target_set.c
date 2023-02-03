/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_target_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_target_set(void)

{
  _DAT_600a28b0 = _DAT_600a28b0 & 0x7fffff | 0xea000000;
  _DAT_600a2898 = _DAT_600a2898 & 0xffff8000 | 0x19d4;
  _DAT_600a2840 = _DAT_600a2840 & 0xffc003ff | 0x3a8800;
  _DAT_600a2894 = _DAT_600a2894 & 0xff803fff | 0x6e8000;
  _DAT_600a28b4 = _DAT_600a28b4 & 0x7fffff | 0xe2000000;
  return;
}

