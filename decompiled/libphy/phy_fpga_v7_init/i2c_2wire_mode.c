/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_init.o -> i2c_2wire_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void i2c_2wire_mode(uint param_1)

{
  uint uVar1;
  
  slv_i2c_wr(0x6000d000,0x6000d008,0x73,0x21,param_1,0xff);
  uVar1 = fpga_mem_rd(0x6000d00c);
  fpga_mem_wr(0x6000d00c,uVar1 & 0xfdffffff | (param_1 & 1) << 0x19);
  return;
}

