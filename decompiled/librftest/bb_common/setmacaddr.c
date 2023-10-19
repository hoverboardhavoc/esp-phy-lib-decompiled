/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> setmacaddr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void setmacaddr(undefined4 param_1,undefined4 param_2)

{
  DAT_600123a1 = (char)param_1;
  DAT_600123a2 = (char)((uint)param_1 >> 8);
  DAT_600123a3 = (char)((uint)param_1 >> 0x10);
  DAT_600123a4 = (char)((uint)param_1 >> 0x18);
  DAT_600123a5 = (char)param_2;
  DAT_600123a6 = (char)((uint)param_2 >> 8);
  DAT_600123a7 = (char)((uint)param_2 >> 0x10);
  DAT_600123a8 = (char)((uint)param_2 >> 0x18);
  return;
}

