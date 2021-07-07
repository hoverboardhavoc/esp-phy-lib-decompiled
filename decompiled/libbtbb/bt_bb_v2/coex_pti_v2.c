/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> coex_pti_v2
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void coex_pti_v2(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6001c080);
  fpga_mem_wr(0x6001c080,uVar1 & 0xffffff3f);
  uVar1 = fpga_mem_rd(0x60035084);
  fpga_mem_wr(0x60035084,uVar1 & 0xfff000ff | 0x3c00);
  uVar1 = fpga_mem_rd(0x6003509c);
  fpga_mem_wr(0x6003509c,uVar1 & 0xffff | 0x140000);
  uVar1 = fpga_mem_rd(0x60035098);
  fpga_mem_wr(0x60035098,uVar1 & 0xffff | 0x6400000);
  uVar1 = fpga_mem_rd(0x6003509c);
  fpga_mem_wr(0x6003509c,uVar1 & 0xffff0000 | 100);
  uVar1 = fpga_mem_rd(0x60035084);
  fpga_mem_wr(0x60035084,uVar1 | 1);
  uVar1 = fpga_mem_rd(0x60035084);
  fpga_mem_wr(0x60035084,uVar1 & 0xf0ffffff | 0xc000000);
  return;
}

