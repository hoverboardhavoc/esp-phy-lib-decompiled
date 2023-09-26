/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> mac_common.o -> bt_rx_fail_dump
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_rx_fail_dump(void)

{
  _DAT_600460b4 = _DAT_600460b4 | 1;
  _DAT_6004bc08 = _DAT_6004bc08 & 0xfff87fff;
  _DAT_6004bc04 = _DAT_6004bc04 & 0x7fffffff | 0x80020000;
  _DAT_6004610c = _DAT_6004610c & 0xffffff7f | 0x80;
  return;
}

