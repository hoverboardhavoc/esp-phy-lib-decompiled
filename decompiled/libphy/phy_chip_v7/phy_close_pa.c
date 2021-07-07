/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> phy_close_pa
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_close_pa(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar1 = fpga_mem_rd(0x6000609c);
    fpga_mem_wr(0x6000609c,uVar1 | 4);
    uVar1 = fpga_mem_rd(0x6000609c);
    fpga_mem_wr(0x6000609c,uVar1 | 0x10);
    uVar1 = fpga_mem_rd(0x600060a0);
    uVar1 = uVar1 & 0xfffff3ff;
    uVar2 = 0x600060a0;
  }
  else {
    uVar1 = fpga_mem_rd(0x600060a0);
    fpga_mem_wr(0x600060a0,uVar1 & 0xfffff3ff | 0x800);
    uVar1 = fpga_mem_rd(0x6000609c);
    fpga_mem_wr(0x6000609c,uVar1 & 0xfffffffb);
    uVar1 = fpga_mem_rd(0x6000609c);
    uVar1 = uVar1 & 0xffffffef;
    uVar2 = 0x6000609c;
  }
  fpga_mem_wr(uVar2,uVar1);
  return;
}

