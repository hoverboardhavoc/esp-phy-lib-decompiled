/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> zb_rx_core_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void zb_rx_core_set(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60011c04);
  fpga_mem_wr(0x60011c04,uVar1 & 0xffff | 0xbb80000);
  uVar1 = fpga_mem_rd(0x60011c08);
  fpga_mem_wr(0x60011c08,uVar1 & 0xffff | 0x17700000);
  uVar1 = fpga_mem_rd(0x60011c08);
  fpga_mem_wr(0x60011c08,uVar1 & 0xffff0000 | 3000);
  uVar1 = fpga_mem_rd(0x60011c04);
  fpga_mem_wr(0x60011c04,uVar1 & 0xfffffc03 | 0x284);
  uVar1 = fpga_mem_rd(0x60011c20);
  fpga_mem_wr(0x60011c20,uVar1 & 0xff | 128000000);
  uVar1 = fpga_mem_rd(0x60011c24);
  fpga_mem_wr(0x60011c24,uVar1 & 0xff | 0xf85edf00);
  return;
}

