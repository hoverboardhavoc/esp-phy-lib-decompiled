/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> mac_common.o -> Conf2AddrGet
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 Conf2AddrGet(int param_1)

{
  if (param_1 - 1U < 0x1b) {
    return *(undefined4 *)(&_LANCHOR19 + (param_1 - 1U) * 4);
  }
  return 0x600a4d60;
}

