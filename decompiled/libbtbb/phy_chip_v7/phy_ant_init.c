/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> phy_ant_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_ant_init(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6001c11c);
  fpga_mem_wr(0x6001c11c,uVar1 & 0xffffefff);
  uVar1 = fpga_mem_rd(0x6001c030);
  fpga_mem_wr(0x6001c030,uVar1 & 0xfffc07ff | 0x1a000);
  uVar1 = fpga_mem_rd(0x6001c11c);
  fpga_mem_wr(0x6001c11c,uVar1 & 0xfffff80f);
  uVar1 = fpga_mem_rd(0x6001c11c);
  fpga_mem_wr(0x6001c11c,uVar1 & 0xfffffff0);
  uVar1 = fpga_mem_rd(0x6001c120);
  fpga_mem_wr(0x6001c120,uVar1 & 0xffff00ff | 0x1e00);
  uVar1 = fpga_mem_rd(0x6001c120);
  fpga_mem_wr(0x6001c120,uVar1 & 0xffffff | 0x1e000000);
  return;
}

