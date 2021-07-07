/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_tx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_tx_set(uint param_1)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60011018);
  fpga_mem_wr(0x60011018,uVar1 & 0xffff00ff | 0x2800);
  uVar1 = fpga_mem_rd(0x60011018);
  fpga_mem_wr(0x60011018,uVar1 & 0xffffff | 0x20000000);
  uVar1 = fpga_mem_rd(0x60011018);
  fpga_mem_wr(0x60011018,uVar1 & 0xffffff00 | 1);
  uVar1 = fpga_mem_rd(0x60011008);
  fpga_mem_wr(0x60011008,(param_1 & 0x3f) << 0x11 | uVar1 & 0xff81ffff);
  uVar1 = fpga_mem_rd(0x6001100c);
  fpga_mem_wr(0x6001100c,uVar1 & 0xfffff0ff | 0x100);
  return;
}

