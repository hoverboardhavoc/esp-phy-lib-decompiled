/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_reg_init.o -> fe_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void fe_reg_init(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x600060a0);
  fpga_mem_wr(0x600060a0,uVar1 | 0x1000000);
  uVar1 = fpga_mem_rd(0x600050d8);
  fpga_mem_wr(0x600050d8,uVar1 | 0x2000000);
  uVar1 = fpga_mem_rd(0x600060b8);
  fpga_mem_wr(0x600060b8,uVar1 | 0x20000000);
  uVar1 = fpga_mem_rd(0x6000609c);
  fpga_mem_wr(0x6000609c,uVar1 | 0x4000);
  uVar1 = fpga_mem_rd(0x6000e150);
  fpga_mem_wr(0x6000e150,uVar1 & 0x8fffffff);
  return;
}

