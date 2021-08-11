/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> phy_i2c_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_i2c_init(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = chip_lp_en != '\0';
  if (bVar1) {
    i2c_writeReg_Mask(0x6b,1,2,3,0,10);
    i2c_writeReg_Mask(0x6b,1,4,3,0,0xf);
    i2c_writeReg_Mask(0x6b,1,4,6,4,6);
    i2c_writeReg_Mask(0x6b,1,2,6,4,7);
    i2c_writeReg_Mask(0x6b,1,1,7,4,0xb);
    uVar3 = 10;
  }
  else {
    i2c_writeReg_Mask(0x6b,1,2,3,0,7);
    i2c_writeReg_Mask(0x6b,1,4,3,0,7);
    i2c_writeReg_Mask(0x6b,1,4,6,4,6);
    i2c_writeReg_Mask(0x6b,1,2,6,4,7);
    i2c_writeReg_Mask(0x6b,1,1,7,4,7);
    i2c_writeReg_Mask(0x6b,1,1,3,0,7);
    uVar3 = 1;
  }
  i2c_writeReg_Mask(0x6b,1,bVar1,3,!bVar1,uVar3);
  i2c_writeReg_Mask(0x62,1,4,2,0,7);
  i2c_writeReg_Mask(0x62,1,9,6,6,1);
  i2c_writeReg_Mask(0x62,1,9,4,0,0x1f);
  i2c_writeReg_Mask(0x62,1,0xb,5,5,0);
  i2c_writeReg_Mask(0x62,1,8,5,5,1);
  i2c_writeReg_Mask(0x6b,1,5,2,0,1);
  i2c_writeReg_Mask(0x6b,1,5,6,4,1);
  i2c_writeReg_Mask(0x67,1,0,6,0,DAT_0001311b);
  i2c_writeReg_Mask(0x67,1,1,6,0,DAT_0001311c);
  i2c_writeReg_Mask(0x67,1,2,6,0,DAT_0001311d);
  i2c_writeReg_Mask(0x67,1,3,6,0,DAT_0001311e);
  uVar2 = chip_i2c_readReg(0x69,0,4);
  if ((uVar2 & 0xf) == 0) {
    i2c_sar2_init_code(800);
    return;
  }
  return;
}

