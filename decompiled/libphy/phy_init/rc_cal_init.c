/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
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
  auStack_1c[0] = 0x2914;
  auStack_14[0] = 0x1e192819;
  rc_cal_new(&uStack_18,auStack_1c,auStack_14);
  return;
}

