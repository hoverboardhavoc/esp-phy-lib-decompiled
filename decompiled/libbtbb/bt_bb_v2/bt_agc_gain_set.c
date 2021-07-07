/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_gain_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_agc_gain_set(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fpga_mem_rd(0x60026010);
  fpga_mem_wr(0x60026010,uVar1 | 0xf000f);
  uVar1 = fpga_mem_rd(0x60011848);
  fpga_mem_wr(0x60011848,uVar1 & 0xff00ffff | 0x800000);
  uVar1 = fpga_mem_rd(0x60011848);
  fpga_mem_wr(0x60011848,uVar1 & 0xffffff | 0x80000000);
  uVar1 = fpga_mem_rd(0x60011868);
  fpga_mem_wr(0x60011868,uVar1 & 0xffffff | 0x80000000);
  uVar1 = fpga_mem_rd(0x60011868);
  fpga_mem_wr(0x60011868,uVar1 & 0xff00ffff | 0x800000);
  uVar2 = (uint)chip7_sleep_params;
  uVar1 = fpga_mem_rd(0x60011850);
  fpga_mem_wr(0x60011850,(uVar2 & 0x7f) << 0xe | uVar1 & 0xffe03fff);
  uVar1 = fpga_mem_rd(0x60011850);
  fpga_mem_wr(0x60011850,uVar1 & 0xffffc07f | (uVar2 & 0x7f) << 7);
  uVar1 = fpga_mem_rd(0x60011850);
  fpga_mem_wr(0x60011850,uVar1 & 0xffffff80 | uVar2 & 0x7f);
  uVar1 = fpga_mem_rd(0x60011840);
  fpga_mem_wr(0x60011840,uVar1 & 0xffffff80 | uVar2 & 0x7f);
  uVar1 = fpga_mem_rd(0x60011854);
  fpga_mem_wr(0x60011854,uVar1 | 1);
  uVar1 = fpga_mem_rd(0x60011844);
  fpga_mem_wr(0x60011844,uVar1 & 0xffffc07f | 0x500);
  uVar1 = fpga_mem_rd(0x60011844);
  fpga_mem_wr(0x60011844,uVar1 & 0xffffff80 | 10);
  uVar1 = fpga_mem_rd(0x60011854);
  fpga_mem_wr(0x60011854,uVar1 & 0xff83ffff | 0x280000);
  uVar1 = fpga_mem_rd(0x60011854);
  fpga_mem_wr(0x60011854,uVar1 & 0xfffffe03 | 200);
  uVar1 = fpga_mem_rd(0x60011854);
  fpga_mem_wr(0x60011854,uVar1 | 1);
  return;
}

