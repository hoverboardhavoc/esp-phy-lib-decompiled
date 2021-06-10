/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> phy_chan_filt_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_chan_filt_set(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar1 = fpga_mem_rd(0x6001cc0c);
    fpga_mem_wr(0x6001cc0c,uVar1 | 0x10000000);
    uVar1 = fpga_mem_rd(0x6001cc0c);
    fpga_mem_wr(0x6001cc0c,uVar1 | 0x10000000);
    uVar1 = fpga_mem_rd(0x6001cd08);
    fpga_mem_wr(0x6001cd08,uVar1 & 0xfffffff8);
    uVar1 = fpga_mem_rd(0x6001cd04);
    uVar1 = uVar1 & 0xfffffff8;
    uVar2 = 0x6001cd04;
  }
  else {
    uVar1 = fpga_mem_rd(0x6001cc0c);
    fpga_mem_wr(0x6001cc0c,uVar1 & 0xefffffff);
    uVar1 = fpga_mem_rd(0x6001cc0c);
    uVar1 = uVar1 & 0xefffffff;
    uVar2 = 0x6001cc0c;
  }
  fpga_mem_wr(uVar2,uVar1);
  if (param_2 == 0) {
    uVar1 = fpga_mem_rd(0x6001c074);
    uVar1 = uVar1 | 0x2000;
  }
  else {
    uVar1 = fpga_mem_rd();
    uVar1 = uVar1 & 0xffffdfff;
  }
  fpga_mem_wr(0x6001c074,uVar1);
  return;
}

