/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> wr_rf_freq_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wr_rf_freq_mem(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = 0;
  do {
    uVar3 = *(undefined4 *)(iVar1 * 4 + param_2);
    uVar2 = fpga_mem_rd(0x6000e0c4);
    fpga_mem_wr(0x6000e0c4,uVar2 & 0xffffff00 | (param_1 * 3 & 0xffU) + iVar1 & 0xff);
    fpga_mem_wr(0x6000e148,uVar3);
    uVar2 = fpga_mem_rd(0x6000e0c4);
    fpga_mem_wr(0x6000e0c4,uVar2 | 0x200);
    uVar2 = fpga_mem_rd(0x6000e0c4);
    iVar1 = iVar1 + 1;
    fpga_mem_wr(0x6000e0c4,uVar2 & 0xfffffdff);
  } while (iVar1 != 3);
  return;
}

