/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> set_cca
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_cca(int param_1,uint param_2)

{
  uint uVar1;
  
  adaptive_test_en = (undefined1)param_1;
  if (param_1 == 1) {
    uVar1 = fpga_mem_rd(0x6001c018);
    fpga_mem_wr(0x6001c018,uVar1 | 0x40000000);
    uVar1 = fpga_mem_rd(0x6001c01c);
    param_2 = uVar1 & 0xffffff00 | param_2;
  }
  else {
    uVar1 = fpga_mem_rd(0x6001c018);
    fpga_mem_wr(0x6001c018,uVar1 & 0xbfffffff);
    uVar1 = fpga_mem_rd(0x6001c01c);
    param_2 = uVar1 & 0xffffff00 | 0x1f;
  }
  fpga_mem_wr(0x6001c01c,param_2);
  return;
}

