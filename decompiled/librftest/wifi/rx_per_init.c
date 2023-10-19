/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> rx_per_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 rx_per_init(void)

{
  undefined1 uVar1;
  uint uVar2;
  
  set_mac_filter(0x3040506,0x102);
  uVar2 = CONCAT13(DAT_60012420,CONCAT12(DAT_6001241f,CONCAT11(DAT_6001241e,DAT_6001241d))) &
          0xffffffa0;
  DAT_6001241d = (byte)uVar2 | 0xd;
  DAT_6001241e = (char)(uVar2 >> 8);
  DAT_6001241f = (char)(uVar2 >> 0x10);
  DAT_60012420 = (char)(uVar2 >> 0x18);
  uVar2 = CONCAT13(DAT_60012424,CONCAT12(DAT_60012423,CONCAT11(DAT_60012422,DAT_60012421))) &
          0xffffffa0;
  DAT_60012421 = (byte)uVar2 | 0xf;
  DAT_60012422 = (char)(uVar2 >> 8);
  DAT_60012423 = (char)(uVar2 >> 0x10);
  DAT_60012424 = (char)(uVar2 >> 0x18);
  uVar2 = CONCAT13(DAT_60012428,CONCAT12(DAT_60012427,CONCAT11(DAT_60012426,DAT_60012425))) &
          0xffffffa0;
  DAT_60012425 = (byte)uVar2 | 0xf;
  DAT_60012426 = (char)(uVar2 >> 8);
  DAT_60012427 = (char)(uVar2 >> 0x10);
  DAT_60012428 = (char)(uVar2 >> 0x18);
  uVar1 = DAT_60012429;
  uVar2 = CONCAT13(DAT_6001242c,CONCAT12(DAT_6001242b,CONCAT11(DAT_6001242a,DAT_60012429))) &
          0xffffffa0;
  DAT_60012429 = (byte)uVar2 | 0xf;
  DAT_6001242a = (char)(uVar2 >> 8);
  DAT_6001242b = (char)(uVar2 >> 0x10);
  DAT_6001242c = (char)(uVar2 >> 0x18);
  return uVar1;
}

