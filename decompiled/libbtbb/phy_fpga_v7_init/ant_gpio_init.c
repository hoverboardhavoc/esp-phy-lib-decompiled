/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_init.o -> ant_gpio_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ant_gpio_init(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60004570);
  fpga_mem_wr(0x60004570,uVar1 & 0xffffff00 | 0xd4);
  uVar1 = fpga_mem_rd(0x6000456c);
  fpga_mem_wr(0x6000456c,uVar1 & 0xffffff00 | 0xd5);
  fpga_mem_wr(0x60005104,0x1020101);
  fpga_mem_wr(0x60005108,0x1020201);
  fpga_mem_wr(0x6000510c,0x2010102);
  uVar1 = fpga_mem_rd(0x60005110);
  fpga_mem_wr(0x60005110,uVar1 & 0xffffff00 | 2);
  return;
}

