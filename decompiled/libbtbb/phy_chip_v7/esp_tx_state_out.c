/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> esp_tx_state_out
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_tx_state_out(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (param_1 + 0x18001155) * 4;
  uVar1 = fpga_mem_rd(iVar2);
  fpga_mem_wr(iVar2,uVar1 & 0xffffff00 | 0xde);
  iVar2 = 1;
  if (param_1 != param_2) {
    iVar2 = (param_2 + 0x18001155) * 4;
    uVar1 = fpga_mem_rd(iVar2);
    fpga_mem_wr(iVar2,uVar1 & 0xffffff00 | 0xdf);
    iVar2 = 2;
  }
  uVar1 = fpga_mem_rd(0x60005104);
  fpga_mem_wr(0x60005104,uVar1 & 0x3f3f3f3f | 0x404000);
  uVar1 = fpga_mem_rd(0x60005108);
  fpga_mem_wr(0x60005108,uVar1 & 0x3f3f3f3f | iVar2 << 0x1e);
  uVar1 = fpga_mem_rd(0x6000510c);
  fpga_mem_wr(0x6000510c,iVar2 << 6 | uVar1 & 0x3f3f3f3f);
  uVar1 = fpga_mem_rd(0x60005110);
  fpga_mem_wr(0x60005110,uVar1 & 0xffffff3f);
  return;
}

