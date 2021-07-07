/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> rtc_mem_backup
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int rtc_mem_backup(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  param_3 = param_3 + 0x60021000;
  uVar1 = (param_2 - param_1) / 4 + 1;
  for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
    uVar2 = fpga_mem_rd(uVar3 * 4 + param_1);
    fpga_mem_wr(param_3,uVar2);
    param_3 = param_3 + 4;
  }
  return uVar1 * 4;
}

