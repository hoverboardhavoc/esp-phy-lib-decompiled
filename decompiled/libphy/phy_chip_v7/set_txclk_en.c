/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> set_txclk_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_txclk_en(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fpga_mem_rd(0x600060a0);
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = 0x30000;
  }
  fpga_mem_wr(0x600060a0,uVar1 & 0xfffcffff | uVar2);
  return;
}

