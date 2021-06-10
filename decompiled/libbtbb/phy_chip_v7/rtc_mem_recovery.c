/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> rtc_mem_recovery
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int rtc_mem_recovery(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  param_3 = param_3 + 0x60021000;
  uVar1 = (param_2 - param_1) / 4 + 1;
  for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
    uVar2 = fpga_mem_rd(param_3);
    fpga_mem_wr(uVar3 * 4 + param_1,uVar2);
    param_3 = param_3 + 4;
  }
  return uVar1 * 4;
}

