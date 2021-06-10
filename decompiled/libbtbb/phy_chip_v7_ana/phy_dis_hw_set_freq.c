/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> phy_dis_hw_set_freq
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

