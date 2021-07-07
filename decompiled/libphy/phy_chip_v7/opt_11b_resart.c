/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> opt_11b_resart
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void opt_11b_resart(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6001c0a0);
  fpga_mem_wr(0x6001c0a0,uVar1 & 0xff00ffff | 0x800000);
  uVar1 = fpga_mem_rd(0x6001c01c);
  fpga_mem_wr(0x6001c01c,uVar1 & 0xff00ffff | 0xc0000);
  uVar1 = fpga_mem_rd(0x6001c094);
  fpga_mem_wr(0x6001c094,uVar1 & 0xffff01ff | 0xdc00);
  uVar1 = fpga_mem_rd(0x6001c0f0);
  fpga_mem_wr(0x6001c0f0,uVar1 & 0xffffff00 | 0x80);
  return;
}

