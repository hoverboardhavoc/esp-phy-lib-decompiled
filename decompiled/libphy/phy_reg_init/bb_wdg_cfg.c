/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_reg_init.o -> bb_wdg_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_wdg_cfg(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6001d03c);
  fpga_mem_wr(0x6001d03c,uVar1 | 0x40000000);
  uVar1 = fpga_mem_rd(0x6001d040);
  fpga_mem_wr(0x6001d040,uVar1 & 0x7fffffff);
  uVar1 = fpga_mem_rd(0x6001d03c);
  fpga_mem_wr(0x6001d03c,uVar1 & 0xffff0000 | 0xaa);
  return;
}

