/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> phy_chan_filt_set
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

