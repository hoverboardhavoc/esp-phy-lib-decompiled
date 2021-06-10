/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> phy_get_fetx_delay
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint phy_get_fetx_delay(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fpga_mem_rd(0x600050d0);
  uVar2 = fpga_mem_rd(0x600050f0);
  uVar2 = uVar2 & 0x1ff;
  if (iVar1 << 1 < 0) {
    uVar2 = 0;
  }
  return uVar2;
}

