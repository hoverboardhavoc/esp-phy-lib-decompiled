/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> get_rxctrl_addr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int get_rxctrl_addr(void)

{
  return *(int *)((CONCAT11(DAT_60012fb8,DAT_60012fb7) & 0xfff0) * 0x10000 +
                 CONCAT13(DAT_600123d8,CONCAT12(DAT_600123d7,CONCAT11(DAT_600123d6,DAT_600123d5))) +
                 4) + (uint)DAT_600123c1;
}

