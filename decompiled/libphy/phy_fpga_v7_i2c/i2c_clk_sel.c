/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_i2c.o -> i2c_clk_sel
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010316) */
/* WARNING: Removing unreachable block (ram,0x00010198) */

void i2c_clk_sel(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = fpga_mem_rd(0x6000e020);
  uVar1 = (param_1 & 7) << 4;
  fpga_mem_wr(0x6000e020,uVar2 & 0xffffff8f | uVar1);
  uVar2 = fpga_mem_rd(0x6000e024);
  uRam6000e024 = uVar2 & 0xffffff8f | uVar1;
  return;
}

