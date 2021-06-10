/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> loopback_mode_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void loopback_mode_en(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  i2c_writeReg_Mask(0x67,1,0,6,6,param_1);
  set_txclk_en(param_1);
  uVar1 = fpga_mem_rd(0x600060a0);
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = 0xc000;
  }
  fpga_mem_wr(0x600060a0,uVar1 & 0xffff3fff | uVar2);
  return;
}

