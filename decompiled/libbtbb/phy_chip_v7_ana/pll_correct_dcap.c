/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> pll_correct_dcap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint pll_correct_dcap(int param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = chip_i2c_readReg(0x62,1,5);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  uVar2 = fpga_mem_rd(0x6000e0c4);
  fpga_mem_wr(0x6000e0c4,uVar2 & 0xffffff00 | param_1 * 3 & 0xffU);
  uVar3 = fpga_mem_rd(0x6000e0c0);
  uVar2 = uVar3 + (uVar1 & 0xff);
  fpga_mem_wr(0x6000e148,
              ((uVar1 & 0xff) + (uVar3 >> 0x18)) * 0x1000000 | uVar3 & 0xffff00 | uVar2 & 0xff);
  uVar3 = fpga_mem_rd(0x6000e0c4);
  fpga_mem_wr(0x6000e0c4,uVar3 | 0x200);
  uVar3 = fpga_mem_rd(0x6000e0c4);
  fpga_mem_wr(0x6000e0c4,uVar3 & 0xfffffdff);
  *param_2 = (char)uVar2;
  return uVar1;
}

