/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> phy_freq_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_freq_correct(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar1 = fpga_mem_rd(0x6001d030);
    fpga_mem_wr(0x6001d030,uVar1 & 0xfffffc00);
    uVar1 = fpga_mem_rd(0x600050f0);
    fpga_mem_wr(0x600050f0,uVar1 & 0xfffffe00);
    uVar1 = fpga_mem_rd(0x600050d0);
    fpga_mem_wr(0x600050d0,uVar1 | 0x40000000);
    uVar1 = fpga_mem_rd(0x6001c850);
    fpga_mem_wr(0x6001c850,uVar1 & 0xffff81ff | 0x3e00);
    uVar1 = fpga_mem_rd(0x6001c850);
    fpga_mem_wr(0x6001c850,uVar1 & 0xfffffe00);
    uVar1 = fpga_mem_rd(0x6001cc98);
    uVar1 = uVar1 & 0xfffffc00;
  }
  else {
    param_2 = param_2 << 1;
    uVar1 = param_2 / 5;
    uVar2 = fpga_mem_rd(0x6001d030);
    fpga_mem_wr(0x6001d030,uVar2 & 0xfffffc00 | 0xfa);
    uVar2 = fpga_mem_rd(0x600050f0);
    fpga_mem_wr(0x600050f0,uVar2 & 0xfffffe00 | 0xfa);
    uVar2 = fpga_mem_rd(0x600050d0);
    fpga_mem_wr(0x600050d0,uVar2 & 0xbfffffff);
    uVar2 = fpga_mem_rd(0x600050c4);
    fpga_mem_wr(0x600050c4,uVar2 & 0xfff00000 | 1000000);
    uVar2 = fpga_mem_rd(0x600050c8);
    fpga_mem_wr(0x600050c8,uVar2 & 0xfff00000 | uVar1 + 1000000);
    iVar3 = 2;
    if (param_2 < 0x1f9) {
      iVar3 = 0x3d;
      if (-0x1f9 < param_2) {
        iVar3 = 0x1f;
      }
    }
    uVar2 = fpga_mem_rd(0x6001c850);
    fpga_mem_wr(0x6001c850,uVar2 & 0xffff81ff | iVar3 << 9);
    uVar2 = fpga_mem_rd(0x6001c850);
    fpga_mem_wr(0x6001c850,uVar2 & 0xfffffe00 | uVar1 & 0x1ff);
    uVar2 = fpga_mem_rd(0x6001cc98);
    uVar1 = uVar2 & 0xfffffc00 | uVar1 & 0x3ff;
  }
  fpga_mem_wr(0x6001cc98,uVar1);
  return;
}

