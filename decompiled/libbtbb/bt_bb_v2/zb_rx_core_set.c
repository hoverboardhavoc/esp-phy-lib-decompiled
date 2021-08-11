/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libbtbb -> bt_bb_v2.o -> zb_rx_core_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_rx_core_set(void)

{
  _DAT_60011c08 = 0x17700bb8;
  _DAT_60011c04 = _DAT_60011c04 & 0xfc03 | 0xbb80284;
  _DAT_60011c20 = _DAT_60011c20 & 0xff | 128000000;
  _DAT_60011c24 = _DAT_60011c24 & 0xff | 0xf85edf00;
  return;
}

