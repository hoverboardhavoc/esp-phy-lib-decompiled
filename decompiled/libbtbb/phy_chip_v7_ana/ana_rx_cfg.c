/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> ana_rx_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ana_rx_cfg(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (chip7_phy_init_ctrl == '\x01') {
    i2c_writeReg_Mask(0x66,1,2,7,7,1);
    i2c_writeReg_Mask(0x66,1,5,2,0,0);
    uVar3 = 1;
  }
  else {
    if (chip7_phy_init_ctrl != '\0') goto _L171;
    i2c_writeReg_Mask(0x66,1,2,7,7);
    i2c_writeReg_Mask(0x66,1,5,2,0,6);
    uVar3 = 3;
  }
  i2c_writeReg_Mask(0x66,1,5,7,6,uVar3);
_L171:
  i2c_writeReg_Mask(0x66,1,10,5,4,1);
  i2c_writeReg_Mask(0x6a,1,2,5,4,1);
  adc_wr_dly(1,0,2,0,0,1);
  i2c_writeReg_Mask(0x67,1,9,0,0,1);
  uVar2 = chip_i2c_readReg();
  uVar3 = phy_enter_critical();
  do {
    uVar1 = fpga_mem_rd(0x6000e004);
  } while ((uVar1 & 0x2000000) != 0);
  fpga_mem_wr(0x6000e004,(uVar2 & 0xfe | 1) << 0x10 | 0x5000b67);
  do {
    uVar2 = fpga_mem_rd(0x6000e004);
  } while ((uVar2 & 0x2000000) != 0);
  phy_exit_critical(uVar3);
  return;
}

