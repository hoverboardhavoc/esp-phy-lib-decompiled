/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> phy_ant_init
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

