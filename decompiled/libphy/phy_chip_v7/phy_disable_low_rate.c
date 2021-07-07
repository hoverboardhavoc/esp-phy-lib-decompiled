/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> phy_disable_low_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_disable_low_rate(void)

{
  uint uVar1;
  
  lr_enable = 0;
  uVar1 = fpga_mem_rd(0x6001c860);
  fpga_mem_wr(0x6001c860,uVar1 & 0xfffffbff);
  uVar1 = fpga_mem_rd(0x6001c860);
  fpga_mem_wr(0x6001c860,uVar1 & 0xfffff7ff);
  uVar1 = fpga_mem_rd(0x6001c87c);
  fpga_mem_wr(0x6001c87c,uVar1 & 0xfffff7ff);
  return;
}

