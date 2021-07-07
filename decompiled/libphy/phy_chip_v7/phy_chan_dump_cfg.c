/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> phy_chan_dump_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_chan_dump_cfg(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6001cd0c);
  fpga_mem_wr(0x6001cd0c,(param_1 & 1) << 3 | uVar1 & 0xfffffff7);
  uVar1 = fpga_mem_rd(0x6001cd0c);
  fpga_mem_wr(0x6001cd0c,uVar1 & 0xffffff0f | (param_2 & 0xf) << 4);
  uVar1 = fpga_mem_rd(0x6001cd0c);
  fpga_mem_wr(0x6001cd0c,uVar1 & 0xfffffffd | (param_3 & 1) << 1);
  uVar1 = fpga_mem_rd(0x6001cd0c);
  fpga_mem_wr(0x6001cd0c,uVar1 & 0xfffffffe | param_4 & 1);
  uVar1 = fpga_mem_rd(0x6001cd0c);
  fpga_mem_wr(0x6001cd0c,uVar1 & 0xfffffffb | (param_5 & 1) << 2);
  return;
}

