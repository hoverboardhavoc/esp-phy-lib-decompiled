/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> chip_v7_rxmax_ext_ana
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void chip_v7_rxmax_ext_ana(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = chip_i2c_readReg(0x62,1,5);
  uVar6 = 0xf;
  if ((iVar4 * 0x18 < 0xf84) &&
     (iVar5 = (iVar4 * 0x18 + -0x154) / 0xe3, uVar6 = (uint)(short)iVar5, iVar5 == -1)) {
    uVar6 = 0;
  }
  uVar1 = (iVar4 * 0x17 + 0x1d) / 0xcf;
  if (0xf < (int)uVar1) {
    uVar1 = 0xf;
  }
  if (param_1 < 3) {
    i2c_writeReg_Mask(100,1,4,3,0,uVar6 & 0xff);
    if (param_1 != 2) goto _L157;
  }
  else {
    iVar5 = 8;
    if (7 < (int)uVar6) {
      iVar5 = 0xfff8;
    }
    i2c_writeReg_Mask(100,1,4,3,0,uVar6 + iVar5 & 0xff);
  }
  if (iVar4 * 0x17 < 0x65b) {
    iVar4 = 8;
  }
  else {
    iVar4 = 0xfff8;
  }
  uVar1 = iVar4 + uVar1;
_L157:
  uVar6 = chip_i2c_readReg();
  uVar2 = phy_enter_critical();
  do {
    uVar3 = fpga_mem_rd(0x6000e004);
  } while ((uVar3 & 0x2000000) != 0);
  fpga_mem_wr(0x6000e004,(uVar1 & 0xff | uVar6 & 0xf0) << 0x10 | 0x5000764);
  do {
    uVar6 = fpga_mem_rd(0x6000e004);
  } while ((uVar6 & 0x2000000) != 0);
  phy_exit_critical(uVar2);
  return;
}

