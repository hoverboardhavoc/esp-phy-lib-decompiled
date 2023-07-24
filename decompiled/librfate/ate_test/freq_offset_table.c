/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librfate -> ate_test.o -> freq_offset_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

bool freq_offset_table(int param_1,uint param_2)

{
  undefined1 uVar1;
  
  if (param_2 < 10) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = 0xe;
    if ((((((2 < (param_2 - 10 & 0xffff)) && (uVar1 = 0xd, param_1 != 2)) &&
          (uVar1 = 0xb, param_1 != 3)) &&
         ((uVar1 = 10, param_1 != 4 && (uVar1 = 9, 1 < (param_1 - 5U & 0xffff))))) &&
        ((uVar1 = 8, 2 < (param_1 - 7U & 0xffff) &&
         ((uVar1 = 7, 3 < (param_1 - 10U & 0xffff) && (uVar1 = 6, 8 < (param_1 - 0xeU & 0xffff))))))
        ) && ((uVar1 = 5, 0x12 < (param_1 - 0x17U & 0xffff) &&
              ((uVar1 = 3, 0x2e < (param_1 - 0x2aU & 0xffff) &&
               (uVar1 = 2, 0xb1 < (param_1 - 0x59U & 0xffff))))))) {
      return param_1 - 0x10bU < 0x216;
    }
  }
  return (bool)uVar1;
}

