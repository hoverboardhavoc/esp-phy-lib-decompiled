/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> set_noise_floor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_noise_floor(int param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  
  iVar1 = -0x188;
  if (-0x189 < param_1) {
    iVar1 = param_1;
  }
  uVar2 = fpga_mem_rd(0x6001c018);
  sVar3 = (short)iVar1;
  if (-0x160 < sVar3) {
    sVar3 = -0x160;
  }
  fpga_mem_wr(0x6001c018,uVar2 & 0xffff801f | ((int)sVar3 & 0x3ffU) << 5);
  uVar2 = fpga_mem_rd(0x6001c018);
  fpga_mem_wr(0x6001c018,uVar2 | 0x10);
  return;
}

