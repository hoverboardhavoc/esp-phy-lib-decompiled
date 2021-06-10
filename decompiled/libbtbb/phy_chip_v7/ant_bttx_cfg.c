/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> ant_bttx_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ant_bttx_cfg(uint param_1)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60005108);
  fpga_mem_wr(0x60005108,(param_1 & 0xf) << 0x18 | uVar1 & 0xf0ffffff);
  uVar1 = fpga_mem_rd(0x6000510c);
  fpga_mem_wr(0x6000510c,uVar1 & 0xfffffff0 | param_1 & 0xf);
  return;
}

