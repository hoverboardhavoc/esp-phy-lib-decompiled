/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_reg_init.o -> fe_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void fe_reg_init(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x600060a0);
  fpga_mem_wr(0x600060a0,uVar1 | 0x1000000);
  uVar1 = fpga_mem_rd(0x600050d8);
  fpga_mem_wr(0x600050d8,uVar1 | 0x2000000);
  uVar1 = fpga_mem_rd(0x600060b8);
  fpga_mem_wr(0x600060b8,uVar1 | 0x20000000);
  uVar1 = fpga_mem_rd(0x6000609c);
  fpga_mem_wr(0x6000609c,uVar1 | 0x4000);
  uVar1 = fpga_mem_rd(0x6000e150);
  fpga_mem_wr(0x6000e150,uVar1 & 0x8fffffff);
  return;
}

