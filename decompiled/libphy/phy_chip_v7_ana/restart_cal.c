/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> restart_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void restart_cal(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  i2c_writeReg_Mask(0x62,1,0,6,6,1);
  i2c_writeReg_Mask(0x62,1,0,5,5,0);
  i2c_writeReg_Mask(0x62,1,0,5,5,1);
  uVar3 = chip_i2c_readReg();
  uVar1 = phy_enter_critical();
  do {
    uVar2 = fpga_mem_rd(0x6000e004);
  } while ((uVar2 & 0x2000000) != 0);
  fpga_mem_wr(0x6000e004,(uVar3 & 0xbf) << 0x10 | 0x5000062);
  do {
    uVar3 = fpga_mem_rd(0x6000e004);
  } while ((uVar3 & 0x2000000) != 0);
  phy_exit_critical(uVar1);
  return;
}

