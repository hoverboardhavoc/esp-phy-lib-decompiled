/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> bb_tx_ht20_cen
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_tx_ht20_cen(uint param_1)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60033c6c);
  fpga_mem_wr(0x60033c6c,(param_1 & 1) << 0x1b | uVar1 & 0xf7ffffff);
  return;
}

