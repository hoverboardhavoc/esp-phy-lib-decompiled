/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> zb_rx_v0_0_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void zb_rx_v0_0_set(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60011c10);
  fpga_mem_wr(0x60011c10,uVar1 & 0x1fffff | 0xe6000000);
  uVar1 = fpga_mem_rd(0x60011c0c);
  fpga_mem_wr(0x60011c0c,uVar1 & 0xffe003ff | 0x1cc000);
  uVar1 = fpga_mem_rd(0x60011c18);
  fpga_mem_wr(0x60011c18,uVar1 & 0xfffff800 | 0x730);
  uVar1 = fpga_mem_rd(0x60011c10);
  fpga_mem_wr(0x60011c10,uVar1 & 0xffe01fff | 0x13c000);
  uVar1 = fpga_mem_rd(0x60011c34);
  fpga_mem_wr(0x60011c34,uVar1 | 0x80000000);
  uVar1 = fpga_mem_rd(0x60011c34);
  fpga_mem_wr(0x60011c34,uVar1 & 0x800fffff | 0x7a500000);
  uVar1 = fpga_mem_rd(0x60011c34);
  fpga_mem_wr(0x60011c34,uVar1 & 0xfff001ff | 0xfde00);
  uVar1 = fpga_mem_rd(0x60011c2c);
  fpga_mem_wr(0x60011c2c,uVar1 & 0xff | 128000000);
  uVar1 = fpga_mem_rd(0x60011c30);
  fpga_mem_wr(0x60011c30,uVar1 & 0xff | 0xf85edf00);
  return;
}

