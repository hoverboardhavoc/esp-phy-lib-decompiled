/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_target_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_agc_target_set(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60011898);
  fpga_mem_wr(0x60011898,uVar1 & 0xfffffe00 | 0x1d4);
  uVar1 = fpga_mem_rd(0x6001189c);
  fpga_mem_wr(0x6001189c,uVar1 & 0xfffffe00 | 0x1d4);
  uVar1 = fpga_mem_rd(0x60011840);
  fpga_mem_wr(0x60011840,uVar1 & 0xffc01fff | 0x3a8000);
  uVar1 = fpga_mem_rd(0x6001189c);
  fpga_mem_wr(0x6001189c,uVar1 & 0xfffc01ff | 0x3a800);
  uVar1 = fpga_mem_rd(0x60011898);
  fpga_mem_wr(0x60011898,uVar1 & 0xffff81ff | 0x1800);
  uVar1 = fpga_mem_rd(0x6001189c);
  fpga_mem_wr(0x6001189c,uVar1 & 0xff03ffff | 0x300000);
  uVar1 = fpga_mem_rd(0x60011840);
  fpga_mem_wr(0x60011840,uVar1 & 0xffffe3ff | 0x800);
  uVar1 = fpga_mem_rd(0x60011894);
  fpga_mem_wr(0x60011894,uVar1 & 0xff803fff | 0x750000);
  uVar1 = fpga_mem_rd(0x60011894);
  fpga_mem_wr(0x60011894,uVar1 & 0x7fffff | 0xea000000);
  uVar1 = fpga_mem_rd(0x600118b4);
  fpga_mem_wr(0x600118b4,uVar1 & 0x7fffff | 0xea000000);
  uVar1 = fpga_mem_rd(0x600118b4);
  fpga_mem_wr(0x600118b4,uVar1 & 0xff803fff | 0x750000);
  return;
}

