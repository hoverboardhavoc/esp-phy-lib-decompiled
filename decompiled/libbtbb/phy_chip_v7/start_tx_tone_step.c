/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> start_tx_tone_step
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void start_tx_tone_step(int param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = fpga_mem_rd(0x600060b8);
  uVar3 = (-param_3 & 0xffU) << 10;
  if (iVar1 << 2 < 0) {
    uVar2 = fpga_mem_rd(0x600050a8);
    fpga_mem_wr(0x600050a8,uVar2 & 0xfffffffc | param_2 & 3);
    uVar2 = fpga_mem_rd(0x600050a8);
    fpga_mem_wr(0x600050a8,uVar2 & 0xfffffff3 | (param_5 & 3) << 2);
    uVar2 = fpga_mem_rd(0x600060b8);
    fpga_mem_wr(0x600060b8,
                uVar2 & 0xf0000000 | (int)param_2 >> 2 & 0xfffffffU | param_1 << 0x12 | uVar3);
    uVar3 = fpga_mem_rd(0x600060bc);
    param_5 = (int)param_5 >> 2;
  }
  else {
    uVar2 = fpga_mem_rd(0x600060b8);
    fpga_mem_wr(0x600060b8,uVar2 & 0xf0000000 | param_2 & 0xfffffff | param_1 << 0x12 | uVar3);
    uVar3 = fpga_mem_rd(0x600060bc);
  }
  fpga_mem_wr(0x600060bc,
              uVar3 & 0xf0000000 | param_5 & 0xfffffff | param_4 << 0x12 | (-param_6 & 0xffU) << 10)
  ;
  return;
}

