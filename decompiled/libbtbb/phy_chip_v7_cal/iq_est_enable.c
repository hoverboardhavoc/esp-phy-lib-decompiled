/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> iq_est_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void iq_est_enable(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fpga_mem_rd(0x60006060);
  fpga_mem_wr(0x60006060,uVar1 & 0xf3ffffff | 0x4000000);
  uVar1 = fpga_mem_rd(0x6000607c);
  fpga_mem_wr(0x6000607c,uVar1 & 0xffe7ffff | 0x100000);
  uVar1 = fpga_mem_rd(0x6000607c);
  fpga_mem_wr(0x6000607c,(param_1 & 0x7fff) << 2 | uVar1 & 0xfffe0003);
  uVar1 = fpga_mem_rd(0x6000607c);
  fpga_mem_wr(0x6000607c,uVar1 | 1);
  ets_delay_us(1);
  uVar1 = fpga_mem_rd(0x6000607c);
  fpga_mem_wr(0x6000607c,uVar1 | 2);
  do {
    iVar2 = fpga_mem_rd(0x6000607c);
  } while (-1 < iVar2);
  return;
}

