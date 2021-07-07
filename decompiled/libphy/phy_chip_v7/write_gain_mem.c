/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> write_gain_mem
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

