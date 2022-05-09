/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
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
  auStack_1c[0] = 0x2913;
  auStack_14[0] = 0x1e192819;
  rc_cal_new(&uStack_18,auStack_1c,auStack_14);
  return;
}

