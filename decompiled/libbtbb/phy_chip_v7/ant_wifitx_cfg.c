/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> ant_wifitx_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ant_wifitx_cfg(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60005104);
  fpga_mem_wr(0x60005104,(param_1 & 0xf) << 8 | uVar1 & 0xfffff0ff);
  uVar1 = fpga_mem_rd(0x60005104);
  fpga_mem_wr(0x60005104,(param_2 & 0xf) << 0x10 | uVar1 & 0xfff0ffff);
  return;
}

