/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> set_mac_filter
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_mac_filter(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  _DAT_600a405c = param_1;
  _DAT_600a4060 = _DAT_600a4060 & 0xffff0000 | param_2 & 0xffff | 0x10000;
  _DAT_600a4000 = param_3;
  _DAT_600a4004 = _DAT_600a4004 & 0xffff0000 | param_4 & 0xffff | 0x80000000;
  _DAT_600a40dc = 0xf;
  _DAT_600a40e0 = 0xf;
  _DAT_600a40e4 = 0xf;
  return;
}

