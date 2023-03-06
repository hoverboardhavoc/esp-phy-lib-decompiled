/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_analog_cal.o -> get_rc_dout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 get_rc_dout(void)

{
  undefined4 uVar1;
  
  i2c_writeReg_Mask(0x61,0,4,2,2,1);
  i2c_writeReg_Mask(0x6a,0,4,0,0,1);
  i2c_writeReg_Mask(0x6a,0,4,3,3,0);
  i2c_writeReg_Mask(0x6a,0,4,3,3,1);
  ets_delay_us(200);
  uVar1 = i2c_readReg_Mask(0x6a,0,5,5,0);
  i2c_writeReg_Mask(0x6a,0,4,0,0,0);
  i2c_writeReg_Mask(0x61,0,4,2,2,0);
  return uVar1;
}

