/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_tx_cca_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_tx_cca_set(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6,
                     uint param_7,int param_8)

{
  uint uVar1;
  uint in_stack_00000000;
  uint in_stack_00000004;
  
  if (param_1 == 0) {
    uVar1 = fpga_mem_rd(0x600110b8);
    uVar1 = uVar1 & 0x7fffffff;
  }
  else {
    uVar1 = fpga_mem_rd(0x600110b8);
    uVar1 = uVar1 | 0x80000000;
  }
  fpga_mem_wr(0x600110b8,uVar1);
  uVar1 = fpga_mem_rd(0x600110b8);
  fpga_mem_wr(0x600110b8,(param_2 & 0xff) << 1 | uVar1 & 0xfffffe01);
  uVar1 = fpga_mem_rd(0x600110b8);
  fpga_mem_wr(0x600110b8,uVar1 | 1);
  if (param_3 == 0) {
    uVar1 = fpga_mem_rd(0x600110bc);
    uVar1 = uVar1 & 0xbfffffff;
  }
  else {
    uVar1 = fpga_mem_rd();
    uVar1 = uVar1 | 0x40000000;
  }
  fpga_mem_wr(0x600110bc,uVar1);
  uVar1 = fpga_mem_rd(0x600110bc);
  fpga_mem_wr(0x600110bc,(param_4 & 0x1f) << 0x19 | uVar1 & 0xc1ffffff);
  uVar1 = fpga_mem_rd(0x600110bc);
  fpga_mem_wr(0x600110bc,(param_5 & 0x1f) << 0x14 | uVar1 & 0xfe0fffff);
  if (param_6 == 0) {
    uVar1 = fpga_mem_rd(0x600110bc);
    uVar1 = uVar1 & 0xffdfffff;
  }
  else {
    uVar1 = fpga_mem_rd();
    uVar1 = uVar1 | 0x200000;
  }
  fpga_mem_wr(0x600110bc,uVar1);
  uVar1 = fpga_mem_rd(0x600110bc);
  fpga_mem_wr(0x600110bc,(param_7 & 0xff) << 0xd | uVar1 & 0xffe01fff);
  if (param_8 == 0) {
    uVar1 = fpga_mem_rd(0x600110bc);
    uVar1 = uVar1 & 0xffffefff;
  }
  else {
    uVar1 = fpga_mem_rd();
    uVar1 = uVar1 | 0x1000;
  }
  fpga_mem_wr(0x600110bc,uVar1);
  uVar1 = fpga_mem_rd(0x600110bc);
  fpga_mem_wr(0x600110bc,(in_stack_00000000 & 0x1f) << 7 | uVar1 & 0xfffff07f);
  uVar1 = fpga_mem_rd(0x600110bc);
  fpga_mem_wr(0x600110bc,uVar1 & 0xffffff83 | (in_stack_00000004 & 0x1f) << 2);
  return;
}

