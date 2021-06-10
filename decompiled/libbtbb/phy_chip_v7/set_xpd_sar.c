/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> set_xpd_sar
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_xpd_sar(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fpga_mem_rd(0x6000880c);
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = 0xc0000;
  }
  fpga_mem_wr(0x6000880c,uVar1 & 0xfff3ffff | uVar2);
  return;
}

