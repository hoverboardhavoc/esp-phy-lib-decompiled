/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> ant_btrx_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ant_btrx_cfg(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6001c11c);
  fpga_mem_wr(0x6001c11c,uVar1 & 0xfffffff7 | (param_1 & 1) << 3);
  uVar1 = fpga_mem_rd(0x6000510c);
  fpga_mem_wr(0x6000510c,(param_2 & 0xf) << 8 | uVar1 & 0xfffff0ff);
  uVar1 = fpga_mem_rd(0x6000510c);
  fpga_mem_wr(0x6000510c,uVar1 & 0xfff0ffff | (param_2 & 0xf) << 0x10);
  uVar1 = fpga_mem_rd(0x6000510c);
  fpga_mem_wr(0x6000510c,(param_3 & 0xf) << 0x18 | uVar1 & 0xf0ffffff);
  uVar1 = fpga_mem_rd(0x60005110);
  fpga_mem_wr(0x60005110,uVar1 & 0xfffffff0 | param_3 & 0xf);
  return;
}

