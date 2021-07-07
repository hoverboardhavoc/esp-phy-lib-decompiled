/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> phy_get_fetx_delay
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

