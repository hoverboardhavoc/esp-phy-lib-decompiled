/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_analog_cal.o -> i2c_rc_set_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void i2c_rc_set_reg(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  i2c_writeReg_Mask(0x6a,0,2,6,5,param_2);
  i2c_writeReg_Mask(0x6a,0,6,4,0,param_3);
  i2c_writeReg_Mask(0x6a,0,4,7,4,param_1);
  return;
}

