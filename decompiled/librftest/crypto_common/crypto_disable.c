/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> crypto_common.o -> crypto_disable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void crypto_disable(void)

{
  DAT_60012b45 = 0;
  DAT_60012b46 = 0;
  DAT_60012b47 = 0;
  DAT_60012b48 = 0;
  DAT_60012b59 = 0;
  DAT_60012b5a = 0;
  DAT_60012b5b = 0;
  DAT_60012b5c = 0;
  return;
}

