/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> adc_wr_dly
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void adc_wr_dly(uint param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  chip_i2c_writeReg(0x66,1,8,(param_4 << 6 | param_2 << 2 | param_1 | param_3 << 4) & 0xff);
  uVar3 = chip_i2c_readReg();
  uVar1 = phy_enter_critical();
  do {
    uVar2 = fpga_mem_rd(0x6000e004);
  } while ((uVar2 & 0x2000000) != 0);
  fpga_mem_wr(0x6000e004,((param_6 << 2 | param_5) & 0xff | uVar3 & 0xf0) << 0x10 | 0x5000966);
  do {
    uVar3 = fpga_mem_rd(0x6000e004);
  } while ((uVar3 & 0x2000000) != 0);
  phy_exit_critical(uVar1);
  return;
}

