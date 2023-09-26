/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> clear_macrxfilter
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_macrxfilter(void)

{
  _DAT_600a40d8 = _DAT_600a40d8 & 0xfffffff2;
  _DAT_600a40dc = _DAT_600a40dc & 0xfffffff2;
  _DAT_600a40e0 = _DAT_600a40e0 & 0xfffffff2;
  _DAT_600a40e4 = _DAT_600a40e4 & 0xfffffff2;
  _DAT_600a4080 = 0x80000000;
  return;
}

