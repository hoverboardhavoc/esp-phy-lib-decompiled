/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_rssi_thresh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_agc_rssi_thresh(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x600118a0);
  fpga_mem_wr(0x600118a0,uVar1 & 0xff00ffff | 0x9c0000);
  uVar1 = fpga_mem_rd(0x600118ac);
  fpga_mem_wr(0x600118ac,uVar1 & 0x807fffff | 0x49000000);
  uVar1 = fpga_mem_rd(0x600118b8);
  fpga_mem_wr(0x600118b8,uVar1 & 0xfff00fff | 0x88000);
  return;
}

