/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_reg_init.o -> agc_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void agc_reg_init(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6001c004);
  fpga_mem_wr(0x6001c004,uVar1 & 0xfffeffff);
  uVar1 = fpga_mem_rd(0x6001c0a4);
  fpga_mem_wr(0x6001c0a4,uVar1 & 0xffffc07f | 0x1e00);
  uVar1 = fpga_mem_rd(0x6001c0a4);
  fpga_mem_wr(0x6001c0a4,uVar1 & 0xffffff80 | 0x3c);
  uVar1 = fpga_mem_rd(0x6001c0c4);
  fpga_mem_wr(0x6001c0c4,uVar1 & 0xefffffff);
  uVar1 = fpga_mem_rd(0x6001c0c4);
  fpga_mem_wr(0x6001c0c4,uVar1 & 0xf7ffffff);
  uVar1 = fpga_mem_rd(0x6001c158);
  fpga_mem_wr(0x6001c158,uVar1 & 0xfff801ff | 0x57800);
  uVar1 = fpga_mem_rd(0x6001c034);
  fpga_mem_wr(0x6001c034,uVar1 & 0xffffff80 | 0x2b);
  uVar1 = fpga_mem_rd(0x6001c104);
  fpga_mem_wr(0x6001c104,uVar1 & 0xfffffe00 | 0x1c8);
  uVar1 = fpga_mem_rd(0x6001c044);
  fpga_mem_wr(0x6001c044,uVar1 & 0xffc0ffff | 0x3e0000);
  uVar1 = fpga_mem_rd(0x6001c14c);
  fpga_mem_wr(0x6001c14c,uVar1 & 0xfffe00ff | 0x1fa00);
  uVar1 = fpga_mem_rd(0x6001c02c);
  fpga_mem_wr(0x6001c02c,uVar1 & 0xffffff | 0x32000000);
  uVar1 = fpga_mem_rd(0x6001c02c);
  fpga_mem_wr(0x6001c02c,uVar1 | 0x800000);
  uVar1 = fpga_mem_rd(0x6001c02c);
  fpga_mem_wr(0x6001c02c,uVar1 & 0xff7fffff);
  return;
}

