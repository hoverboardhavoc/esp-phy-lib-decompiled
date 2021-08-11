/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> get_bias_ref_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 get_bias_ref_code(void)

{
  undefined4 uVar1;
  
  i2c_writeReg_Mask(0x6a,0,2,1,1,1);
  i2c_writeReg_Mask(0x6a,0,7,3,2,1);
  uVar1 = read_sar2_code();
  i2c_writeReg_Mask(0x6a,0,2,1,1,0);
  i2c_writeReg_Mask(0x6a,0,7,3,2,0);
  return uVar1;
}

