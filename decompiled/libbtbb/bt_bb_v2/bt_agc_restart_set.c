/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_restart_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_agc_restart_set(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60011888);
  fpga_mem_wr(0x60011888,uVar1 & 0xefffffff);
  uVar1 = fpga_mem_rd(0x600118ac);
  fpga_mem_wr(0x600118ac,uVar1 & 0xfffff03f | 0xe40);
  uVar1 = fpga_mem_rd(0x600118ac);
  fpga_mem_wr(0x600118ac,uVar1 & 0xfffc0fff | 0x31000);
  uVar1 = fpga_mem_rd(0x600118a4);
  fpga_mem_wr(0x600118a4,uVar1 & 0xf81fffff | 0xe00000);
  uVar1 = fpga_mem_rd(0x600118a4);
  fpga_mem_wr(0x600118a4,uVar1 & 0xffe07fff | 0x60000);
  uVar1 = fpga_mem_rd(0x600118ac);
  fpga_mem_wr(0x600118ac,uVar1 & 0xffffffc0 | 0x34);
  uVar1 = fpga_mem_rd(0x600118b8);
  fpga_mem_wr(0x600118b8,uVar1 & 0x3ffffff | 0x3c000000);
  uVar1 = fpga_mem_rd(0x600118b8);
  fpga_mem_wr(0x600118b8,uVar1 & 0xfc0fffff | 0x3100000);
  uVar1 = fpga_mem_rd(0x600118bc);
  fpga_mem_wr(0x600118bc,uVar1 | 0x80000000);
  uVar1 = fpga_mem_rd(0x600118bc);
  fpga_mem_wr(0x600118bc,uVar1 | 0x78000000);
  uVar1 = fpga_mem_rd(0x600118bc);
  fpga_mem_wr(0x600118bc,uVar1 & 0xf81fffff | 0x1200000);
  uVar1 = fpga_mem_rd(0x600118bc);
  fpga_mem_wr(0x600118bc,uVar1 & 0xffe07fff | 0x48000);
  uVar1 = fpga_mem_rd(0x600118bc);
  fpga_mem_wr(0x600118bc,uVar1 & 0xffff81ff | 0x1200);
  uVar1 = fpga_mem_rd(0x60011884);
  fpga_mem_wr(0x60011884,uVar1 | 0x800000);
  uVar1 = fpga_mem_rd(0x60011884);
  fpga_mem_wr(0x60011884,uVar1 & 0xffffff | 0xf4000000);
  return;
}

