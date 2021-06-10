/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> start_tx_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void start_tx_tone(uint param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = fpga_mem_rd(0x600060b8);
  if (iVar2 << 2 < 0) {
    uVar3 = (ushort)((param_2 << 7) / 5) & 0xfff;
    uVar5 = (ushort)((param_5 << 7) / 5) & 0xfff;
  }
  else {
    uVar3 = (ushort)((param_2 << 5) / 5) & 0x3ff;
    uVar5 = (ushort)((param_5 << 5) / 5) & 0x3ff;
  }
  uVar6 = (uint)(short)uVar5;
  uVar4 = (uint)(short)uVar3;
  iVar2 = fpga_mem_rd(0x600060b8);
  uVar8 = (param_1 & 0xff) << 0x12;
  uVar7 = (-(param_3 & 0xff) & 0xff) << 10;
  if (iVar2 << 2 < 0) {
    uVar1 = fpga_mem_rd(0x600050a8);
    fpga_mem_wr(0x600050a8,uVar1 & 0xfffffffc | uVar4 & 3);
    uVar1 = fpga_mem_rd(0x600050a8);
    fpga_mem_wr(0x600050a8,uVar1 & 0xfffffff3 | (uVar6 & 3) << 2);
    uVar1 = fpga_mem_rd(0x600060b8);
    fpga_mem_wr(0x600060b8,uVar1 & 0xf0000000 | (int)uVar4 >> 2 | uVar8 | uVar7);
    uVar4 = fpga_mem_rd(0x600060bc);
    uVar6 = (int)uVar6 >> 2;
  }
  else {
    uVar1 = fpga_mem_rd(0x600060b8);
    fpga_mem_wr(0x600060b8,uVar1 & 0xf0000000 | uVar4 | uVar8 | uVar7);
    uVar4 = fpga_mem_rd(0x600060bc);
  }
  fpga_mem_wr(0x600060bc,
              uVar4 & 0xf0000000 |
              uVar6 | (param_4 & 0xff) << 0x12 | (-(param_6 & 0xff) & 0xff) << 10);
  return;
}

