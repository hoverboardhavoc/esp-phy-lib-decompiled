/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_reg_init.o -> bb_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_reg_init(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6001c400);
  fpga_mem_wr(0x6001c400,uVar1 | 0x6000);
  uVar1 = fpga_mem_rd(0x6001cc0c);
  fpga_mem_wr(0x6001cc0c,uVar1 & 0xfffffffd);
  uVar1 = fpga_mem_rd(0x6001cc48);
  fpga_mem_wr(0x6001cc48,uVar1 & 0xff000000 | 0x433af);
  uVar1 = fpga_mem_rd(0x6001cc48);
  fpga_mem_wr(0x6001cc48,uVar1 & 0xe0ffffff | 0x17000000);
  uVar1 = fpga_mem_rd(0x6001cc08);
  fpga_mem_wr(0x6001cc08,uVar1 & 0xffffc07f | 0x3000);
  uVar1 = fpga_mem_rd(0x6001ccdc);
  fpga_mem_wr(0x6001ccdc,uVar1 & 0xffffc07f | 0x100);
  uVar1 = fpga_mem_rd(0x6001cce4);
  fpga_mem_wr(0x6001cce4,uVar1 & 0xffbfffff);
  uVar1 = fpga_mem_rd(0x6001c400);
  fpga_mem_wr(0x6001c400,uVar1 & 0xffffff00 | 0xa5);
  fpga_mem_wr(0x6001cd04,0x826916e);
  fpga_mem_wr(0x6001cd08,0x826916e);
  uVar1 = fpga_mem_rd(0x6001cc0c);
  fpga_mem_wr(0x6001cc0c,uVar1 & 0xefffffff);
  uVar1 = fpga_mem_rd(0x6001cc0c);
  fpga_mem_wr(0x6001cc0c,uVar1 & 0xefffffff);
  return;
}

