/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> rftx_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rftx_init(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  chip_i2c_writeReg(0x6b,1,3,0xa8);
  chip_i2c_writeReg(0x6b,1,4,6);
  chip_i2c_writeReg(0x6b,1,5,8);
  chip_i2c_writeReg(0x6b,1,6,0xb8);
  chip_i2c_writeReg(0x6b,1,7,0x5b);
  uVar1 = phy_enter_critical();
  do {
    uVar2 = fpga_mem_rd(0x6000e004);
  } while ((uVar2 & 0x2000000) != 0);
  fpga_mem_wr(0x6000e004,0x5740a6b);
  do {
    uVar2 = fpga_mem_rd(0x6000e004);
  } while ((uVar2 & 0x2000000) != 0);
  phy_exit_critical(uVar1);
  return;
}

