/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> freq_i2c_read_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void freq_i2c_read_set(uint param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6000e14c);
  fpga_mem_wr(0x6000e14c,(param_1 & 0xf) << 0x10 | uVar1 & 0xfff0ffff);
  uVar1 = fpga_mem_rd(0x6000e14c);
  fpga_mem_wr(0x6000e14c,uVar1 & 0xffffff00 | param_2);
  uVar1 = fpga_mem_rd(0x6000e14c);
  fpga_mem_wr(0x6000e14c,uVar1 & 0xffff00ff | param_3 << 8);
  uVar1 = fpga_mem_rd(0x6000e14c);
  fpga_mem_wr(0x6000e14c,(param_5 & 1) << 0x14 | uVar1 & 0xffefffff);
  uVar1 = fpga_mem_rd(0x6000e150);
  fpga_mem_wr(0x6000e150,(param_6 & 1) << 0x11 | uVar1 & 0xfffdffff);
  uVar1 = fpga_mem_rd(0x6000e150);
  fpga_mem_wr(0x6000e150,uVar1 & 0xffffff00 | param_4);
  return;
}

