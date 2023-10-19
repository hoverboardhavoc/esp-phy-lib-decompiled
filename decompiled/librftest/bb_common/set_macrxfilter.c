/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> set_macrxfilter
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_macrxfilter(void)

{
  uint uVar1;
  
  uVar1 = CONCAT13(DAT_60012420,CONCAT12(DAT_6001241f,CONCAT11(DAT_6001241e,DAT_6001241d))) &
          0xffffdfff;
  DAT_6001241d = DAT_6001241d | 0xd;
  DAT_6001241e = (char)(uVar1 >> 8);
  DAT_6001241f = (char)(uVar1 >> 0x10);
  DAT_60012420 = (char)(uVar1 >> 0x18);
  uVar1 = CONCAT13(DAT_60012424,CONCAT12(DAT_60012423,CONCAT11(DAT_60012422,DAT_60012421))) &
          0xffffdfff;
  DAT_60012421 = DAT_60012421 | 0xd;
  DAT_60012422 = (char)(uVar1 >> 8);
  DAT_60012423 = (char)(uVar1 >> 0x10);
  DAT_60012424 = (char)(uVar1 >> 0x18);
  uVar1 = CONCAT13(DAT_60012428,CONCAT12(DAT_60012427,CONCAT11(DAT_60012426,DAT_60012425))) &
          0xffffdfff;
  DAT_60012425 = DAT_60012425 | 0xd;
  DAT_60012426 = (char)(uVar1 >> 8);
  DAT_60012427 = (char)(uVar1 >> 0x10);
  DAT_60012428 = (char)(uVar1 >> 0x18);
  uVar1 = CONCAT13(DAT_6001242c,CONCAT12(DAT_6001242b,CONCAT11(DAT_6001242a,DAT_60012429))) &
          0xffffdfff;
  DAT_60012429 = DAT_60012429 | 0xd;
  DAT_6001242a = (char)(uVar1 >> 8);
  DAT_6001242b = (char)(uVar1 >> 0x10);
  DAT_6001242c = (char)(uVar1 >> 0x18);
  return;
}

