/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libbtbb -> bt_bb_v2.o -> zb_rx_v0_0_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_rx_v0_0_set(void)

{
  _DAT_60011c0c = _DAT_60011c0c & 0xffe003ff | 0x1cc000;
  _DAT_60011c18 = _DAT_60011c18 & 0xfffff800 | 0x730;
  _DAT_60011c10 = _DAT_60011c10 & 0x1fff | 0xe613c000;
  _DAT_60011c34 = _DAT_60011c34 & 0x800001ff | 0xfa5fae00;
  _DAT_60011c2c = _DAT_60011c2c & 0xff | 128000000;
  _DAT_60011c30 = _DAT_60011c30 & 0xff | 0xf85edf00;
  return;
}

