/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> phy_dis_hw_set_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_dis_hw_set_freq(void)

{
  int iVar1;
  uint uVar2;
  
  do {
    iVar1 = fpga_mem_rd(0x6000e168);
    if (-1 < iVar1) break;
    uVar2 = fpga_mem_rd(0x6000e0c4);
  } while ((uVar2 & 0x100) == 0);
  uVar2 = fpga_mem_rd(0x6000e0c4);
  fpga_mem_wr(0x6000e0c4,uVar2 | 0x2000000);
  ets_delay_us(2);
  return;
}

