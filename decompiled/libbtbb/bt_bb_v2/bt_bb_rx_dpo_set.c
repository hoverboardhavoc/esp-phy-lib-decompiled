/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_dpo_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_rx_dpo_set(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60011038);
  fpga_mem_wr(0x60011038,uVar1 & 0xfffff87f | 0x280);
  uVar1 = fpga_mem_rd(0x60011024);
  fpga_mem_wr(0x60011024,uVar1 & 0x87ffffff | 0x28000000);
  uVar1 = fpga_mem_rd(0x60011020);
  fpga_mem_wr(0x60011020,uVar1 & 0xfffc3fff | 0x14000);
  uVar1 = fpga_mem_rd(0x60011020);
  fpga_mem_wr(0x60011020,uVar1 & 0xffffc3ff | 0x1400);
  uVar1 = fpga_mem_rd(0x60011020);
  fpga_mem_wr(0x60011020,uVar1 & 0xffffffc0 | 6);
  uVar1 = fpga_mem_rd(0x60011024);
  fpga_mem_wr(0x60011024,uVar1 & 0xfbffffff);
  uVar1 = fpga_mem_rd(0x60011028);
  fpga_mem_wr(0x60011028,uVar1 | 0x30);
  uVar1 = fpga_mem_rd(0x6001102c);
  fpga_mem_wr(0x6001102c,uVar1 & 0xfffff00f | 0xfd0);
  uVar1 = fpga_mem_rd(0x60011028);
  fpga_mem_wr(0x60011028,uVar1 & 0xfffffff3 | 4);
  uVar1 = fpga_mem_rd(0x6001102c);
  fpga_mem_wr(0x6001102c,uVar1 & 0xfffffff9 | 2);
  uVar1 = fpga_mem_rd(0x60011030);
  fpga_mem_wr(0x60011030,uVar1 & 0xffffffc0 | 4);
  return;
}

