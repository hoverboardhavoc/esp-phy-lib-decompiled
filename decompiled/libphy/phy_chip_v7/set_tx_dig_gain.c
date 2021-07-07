/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> set_tx_dig_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_tx_dig_gain(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60006000);
  fpga_mem_wr(0x60006000,(param_2 & 0xff) << 2 | uVar1 & 0xfffffc03);
  uVar1 = fpga_mem_rd(0x60006000);
  fpga_mem_wr(0x60006000,uVar1 & 0xfffffffe | param_1 & 1);
  return;
}

