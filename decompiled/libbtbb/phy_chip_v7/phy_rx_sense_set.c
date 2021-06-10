/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> phy_rx_sense_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_rx_sense_set(uint param_1)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6001c010);
  fpga_mem_wr(0x6001c010,uVar1 & 0x7fffff | param_1 << 0x17);
  uVar1 = fpga_mem_rd(0x6001c014);
  fpga_mem_wr(0x6001c014,uVar1 & 0x7fffff | param_1 << 0x17);
  uVar1 = fpga_mem_rd(0x6001c044);
  fpga_mem_wr(0x6001c044,uVar1 & 0xffffff00 | param_1);
  if (param_1 == 0) {
    uVar1 = fpga_mem_rd();
    uVar1 = uVar1 | 0x200;
  }
  else {
    uVar1 = fpga_mem_rd(0x6001c108);
    uVar1 = uVar1 & 0xfffffdff;
  }
  fpga_mem_wr(0x6001c108,uVar1);
  return;
}

