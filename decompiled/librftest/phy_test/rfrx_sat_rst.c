/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> phy_test.o -> rfrx_sat_rst
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 rfrx_sat_rst(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = CONCAT13(DAT_600123a4,CONCAT12(DAT_600123a3,CONCAT11(DAT_600123a2,DAT_600123a1))) &
            0xfef7ffff;
  }
  else {
    uVar1 = CONCAT13(DAT_600123a4,CONCAT12(DAT_600123a3,CONCAT11(DAT_600123a2,DAT_600123a1))) |
            0x1080000;
  }
  DAT_600123a2 = (char)(uVar1 >> 8);
  DAT_600123a3 = (char)(uVar1 >> 0x10);
  DAT_600123a4 = (char)(uVar1 >> 0x18);
  return DAT_600123a1;
}

