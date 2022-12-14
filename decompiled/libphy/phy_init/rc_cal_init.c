/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_init.o -> rc_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rc_cal_init(void)

{
  undefined2 auStack_1c [2];
  undefined4 uStack_18;
  undefined4 auStack_14 [4];
  
  uStack_18 = 0x141e1428;
  auStack_1c[0] = 0x2814;
  auStack_14[0] = 0x28193224;
  rc_cal_new(&uStack_18,auStack_1c,auStack_14);
  return;
}

