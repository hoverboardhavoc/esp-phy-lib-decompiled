/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_recorrect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_agc_recorrect_set(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x600118b4);
  fpga_mem_wr(0x600118b4,uVar1 | 0x100);
  uVar1 = fpga_mem_rd(0x600118b4);
  fpga_mem_wr(0x600118b4,uVar1 & 0xffffc1ff | 0x1400);
  uVar1 = fpga_mem_rd(0x600118bc);
  fpga_mem_wr(0x600118bc,uVar1 | 0x1e0);
  uVar1 = fpga_mem_rd(0x60011868);
  fpga_mem_wr(0x60011868,uVar1 & 0xffffdfff);
  uVar1 = fpga_mem_rd(0x60011868);
  fpga_mem_wr(0x60011868,uVar1 | 0x20);
  uVar1 = fpga_mem_rd(0x60011868);
  fpga_mem_wr(0x60011868,uVar1 | 0x1800);
  uVar1 = fpga_mem_rd(0x60011868);
  fpga_mem_wr(0x60011868,uVar1 & 0xfffff83f | 0x280);
  uVar1 = fpga_mem_rd(0x600118b0);
  fpga_mem_wr(0x600118b0,uVar1 & 0xffffc1ff | 0x1400);
  uVar1 = fpga_mem_rd(0x600118b0);
  fpga_mem_wr(0x600118b0,uVar1 & 0xfffffe0f | 0xa0);
  uVar1 = fpga_mem_rd(0x60011868);
  fpga_mem_wr(0x60011868,uVar1 & 0xffffffe0 | 10);
  uVar1 = fpga_mem_rd(0x6001186c);
  fpga_mem_wr(0x6001186c,uVar1 & 0xffffff | 0xf000000);
  return;
}

