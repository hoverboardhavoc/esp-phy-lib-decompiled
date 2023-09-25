/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librfate -> ate_test.o -> freq_offset_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 freq_offset_table(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 10) {
    uVar1 = 0x27;
  }
  else {
    uVar1 = 0x24;
    if (((((2 < (param_2 - 10 & 0xffff)) && (uVar1 = 0x21, param_1 != 2)) &&
         (uVar1 = 0x1e, param_1 != 3)) &&
        ((((uVar1 = 0x1b, param_1 != 4 && (uVar1 = 0x18, 1 < (param_1 - 5U & 0xffff))) &&
          ((uVar1 = 0x15, 2 < (param_1 - 7U & 0xffff) &&
           ((uVar1 = 0x12, 3 < (param_1 - 10U & 0xffff) &&
            (uVar1 = 0xf, 8 < (param_1 - 0xeU & 0xffff))))))) &&
         (uVar1 = 0xc, 0x12 < (param_1 - 0x17U & 0xffff))))) &&
       (((uVar1 = 9, 0x2e < (param_1 - 0x2aU & 0xffff) &&
         (uVar1 = 6, 0xb1 < (param_1 - 0x59U & 0xffff))) &&
        (uVar1 = 3, 0x215 < (param_1 - 0x10bU & 0xffff))))) {
      return 0;
    }
  }
  return uVar1;
}

