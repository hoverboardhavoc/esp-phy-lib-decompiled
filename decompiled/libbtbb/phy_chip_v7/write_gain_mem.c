/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> write_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void write_gain_mem(undefined4 param_1,int param_2)

{
  fpga_mem_wr(0x60005038);
  fpga_mem_wr(0x60005034,param_2 * 0x100 + 0x100f0);
  fpga_mem_wr(0x60005038,param_1);
  fpga_mem_wr(0x60005034,param_2 * 0x100 + 0x1000f);
  return;
}

