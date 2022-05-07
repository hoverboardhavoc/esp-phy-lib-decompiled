/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
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
  auStack_14[0] = 0x3020404;
  rc_cal(&uStack_18,auStack_1c,auStack_14);
  return;
}

