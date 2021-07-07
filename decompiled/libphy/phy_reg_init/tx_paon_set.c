/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_reg_init.o -> tx_paon_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void tx_paon_set(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6001d000);
  fpga_mem_wr(0x6001d000,uVar1 & 0xffe007ff | 0x8000);
  uVar1 = fpga_mem_rd(0x60006048);
  fpga_mem_wr(0x60006048,uVar1 & 0xffff00ff | 0xf200);
  fpga_mem_rd(0x6001d06c);
  fpga_mem_wr(0x6001d06c,0xcc3f0f0);
  uVar1 = fpga_mem_rd(0x6001c400);
  fpga_mem_wr(0x6001c400,uVar1 & 0xfff8ffff);
  return;
}

