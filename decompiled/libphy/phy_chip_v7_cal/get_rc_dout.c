/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> get_rc_dout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 get_rc_dout(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  i2c_writeReg_Mask(0x6a,0,2,6,5,2);
  i2c_writeReg_Mask(0x6a,0,6,4,0,2);
  uVar1 = param_1 - 1U & 0xff;
  if (uVar1 < 3) {
    uVar3 = (&_LANCHOR0)[uVar1];
  }
  else {
    uVar3 = 0xb;
  }
  i2c_writeReg_Mask(0x6a,0,4,7,4,uVar3);
  i2c_writeReg_Mask(0x61,0,4,2,2,1);
  i2c_writeReg_Mask(0x6a,0,4,0,0,1);
  i2c_writeReg_Mask(0x6a,0,4,3,3,0);
  i2c_writeReg_Mask(0x6a,0,4,3,3,1);
  ets_delay_us(500);
  uVar2 = i2c_readReg_Mask(0x6a,0,5,5,0);
  i2c_writeReg_Mask(0x61,0,4,2,2,0);
  i2c_writeReg_Mask(0x6a,0,4,0,0,0);
  return uVar2;
}

