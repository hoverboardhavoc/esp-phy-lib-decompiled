/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> rx_init_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_init_gain(uint param_1)

{
  _DAT_600a713c = (param_1 & 0x7f) << 0x12 | _DAT_600a713c & 0xfe03ffff;
  _DAT_600a7094 = (param_1 & 0x7f) << 2 | _DAT_600a7094 & 0xfffffe03;
  return;
}

