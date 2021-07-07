/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> noise_floor_auto_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void noise_floor_auto_set(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6001c018);
  fpga_mem_wr(0x6001c018,uVar1 | 0x800000);
  uVar1 = fpga_mem_rd(0x6001c018);
  fpga_mem_wr(0x6001c018,uVar1 | 0x10000000);
  uVar1 = fpga_mem_rd(0x6001d044);
  fpga_mem_wr(0x6001d044,uVar1 | 1);
  uVar1 = fpga_mem_rd(0x6001d050);
  fpga_mem_wr(0x6001d050,uVar1 | 1);
  return;
}

