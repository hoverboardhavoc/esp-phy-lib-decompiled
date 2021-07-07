/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_correlator_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_rx_correlator_set(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60011064);
  fpga_mem_wr(0x60011064,uVar1 & 0xfc0fffff | 0x200000);
  uVar1 = fpga_mem_rd(0x60011064);
  fpga_mem_wr(0x60011064,uVar1 & 0xffffc0ff | 0x900);
  uVar1 = fpga_mem_rd(0x60011064);
  fpga_mem_wr(0x60011064,uVar1 & 0xffffff03 | 8);
  uVar1 = fpga_mem_rd(0x60011068);
  fpga_mem_wr(0x60011068,uVar1 & 0x3ffffff | 0x10000000);
  uVar1 = fpga_mem_rd(0x60011068);
  fpga_mem_wr(0x60011068,uVar1 & 0xfffff81f | 0x60);
  uVar1 = fpga_mem_rd(0x600110fc);
  fpga_mem_wr(0x600110fc,uVar1 & 0x81ffffff | 0x12000000);
  uVar1 = fpga_mem_rd(0x60011068);
  fpga_mem_wr(0x60011068,uVar1 & 0xfc0fffff | 0xd00000);
  uVar1 = fpga_mem_rd(0x60011068);
  fpga_mem_wr(0x60011068,uVar1 & 0xfff00fff | 0x9f000);
  uVar1 = fpga_mem_rd(0x60011068);
  fpga_mem_wr(0x60011068,uVar1 | 0x800);
  uVar1 = fpga_mem_rd(0x60011060);
  fpga_mem_wr(0x60011060,uVar1 & 0x3ffffff | 0x10000000);
  uVar1 = fpga_mem_rd(0x60011100);
  fpga_mem_wr(0x60011100,uVar1 & 0xff3fffff | 0x400000);
  uVar1 = fpga_mem_rd(0x60011100);
  fpga_mem_wr(0x60011100,uVar1 & 0xf3ffffff | 0x8000000);
  uVar1 = fpga_mem_rd(0x60011064);
  fpga_mem_wr(0x60011064,uVar1 & 0xfff03fff | 0x8000);
  uVar1 = fpga_mem_rd(0x600110f8);
  fpga_mem_wr(0x600110f8,uVar1 & 0xfe07ffff | 0x100000);
  uVar1 = fpga_mem_rd(0x600110f8);
  fpga_mem_wr(0x600110f8,uVar1 & 0xfffff81f | 0x40);
  uVar1 = fpga_mem_rd(0x600110f8);
  fpga_mem_wr(0x600110f8,uVar1 & 0xfff807ff | 0x54000);
  uVar1 = fpga_mem_rd(0x600110f8);
  fpga_mem_wr(0x600110f8,uVar1 & 0x81ffffff);
  return;
}

