/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> wr_rf_freq_mem
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

