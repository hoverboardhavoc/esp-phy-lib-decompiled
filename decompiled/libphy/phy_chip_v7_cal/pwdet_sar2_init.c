/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> pwdet_sar2_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pwdet_sar2_init(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6000880c);
  fpga_mem_wr(0x6000880c,uVar1 | 0xc0000);
  uVar1 = fpga_mem_rd(0x60008890);
  fpga_mem_wr(0x60008890,uVar1 | 0x8000000);
  uVar1 = fpga_mem_rd(0x60008890);
  fpga_mem_wr(0x60008890,uVar1 & 0xefffffff);
  uVar1 = fpga_mem_rd(0x60008894);
  fpga_mem_wr(0x60008894,uVar1 | 0x80000000);
  uVar1 = fpga_mem_rd(0x60008894);
  fpga_mem_wr(0x60008894,uVar1 & 0x8007ffff);
  uVar1 = fpga_mem_rd(0x6000882c);
  fpga_mem_wr(0x6000882c,uVar1 | 0xc);
  uVar1 = fpga_mem_rd(0x60008838);
  fpga_mem_wr(0x60008838,uVar1 & 0x3fffffff);
  uVar1 = fpga_mem_rd(0x60008838);
  fpga_mem_wr(0x60008838,uVar1 & 0xfffffffc);
  uVar1 = fpga_mem_rd(0x6000882c);
  fpga_mem_wr(0x6000882c,uVar1 & 0xffffff1f | 0x80);
  return;
}

