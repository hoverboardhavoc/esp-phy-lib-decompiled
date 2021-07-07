/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> pbus_force_mode.part.0
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_force_mode_part_0(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60006094);
  fpga_mem_wr(0x60006094,uVar1 & 0xfffffffe);
  uVar1 = fpga_mem_rd(0x6000609c);
  fpga_mem_wr(0x6000609c,uVar1 | 0x8000000);
  uVar1 = fpga_mem_rd(0x6002600c);
  if ((uVar1 & 2) != 0) {
    ets_delay_us(1);
    uVar1 = fpga_mem_rd(0x6001c02c);
    fpga_mem_wr(0x6001c02c,uVar1 & 0xffffff | 0x32000000);
    uVar1 = fpga_mem_rd(0x6001c02c);
    fpga_mem_wr(0x6001c02c,uVar1 | 0x800000);
    ets_delay_us(2);
    uVar1 = fpga_mem_rd(0x6001c02c);
    fpga_mem_wr(0x6001c02c,uVar1 & 0xff7fffff);
    return;
  }
  return;
}

