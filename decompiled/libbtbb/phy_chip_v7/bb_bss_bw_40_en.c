/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> bb_bss_bw_40_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_bss_bw_40_en(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = fpga_mem_rd(0x6002600c);
    fpga_mem_wr(0x6002600c,uVar1 & 0xfffffff3 | 4);
    return;
  }
  return;
}

