/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> mac_common.o -> HTsigAddrGet
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 HTsigAddrGet(int param_1)

{
  if (param_1 - 1U < 0x1b) {
    return *(undefined4 *)(&_LANCHOR21 + (param_1 - 1U) * 4);
  }
  return 0x600137d9;
}

