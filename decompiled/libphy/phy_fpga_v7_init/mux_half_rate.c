/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_init.o -> mux_half_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void mux_half_rate(uint param_1)

{
  uint uVar1;
  
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x30,(param_1 & 1) << 4,0x10);
  uVar1 = fpga_mem_rd(0x6000d00c);
  fpga_mem_wr(0x6000d00c,uVar1 & 0xff7fffff | (param_1 & 1) << 0x17);
  return;
}

