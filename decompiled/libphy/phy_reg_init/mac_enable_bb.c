/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_reg_init.o -> mac_enable_bb
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void mac_enable_bb(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6002600c);
  fpga_mem_wr(0x6002600c,uVar1 | 0x10000000);
  uVar1 = fpga_mem_rd(0x6002600c);
  fpga_mem_wr(0x6002600c,uVar1 & 0xfffffffd);
  uVar1 = fpga_mem_rd(0x6002600c);
  fpga_mem_wr(0x6002600c,uVar1 | 2);
  uVar1 = fpga_mem_rd(0x6002600c);
  fpga_mem_wr(0x6002600c,uVar1 & 0xfffffffd);
  uVar1 = fpga_mem_rd(0x6002600c);
  fpga_mem_wr(0x6002600c,uVar1 | 2);
  uVar1 = fpga_mem_rd(0x6002600c);
  fpga_mem_wr(0x6002600c,uVar1 & 0xfffffffd);
  uVar1 = fpga_mem_rd(0x6002600c);
  fpga_mem_wr(0x6002600c,uVar1 | 2);
  return;
}

