/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rfpll.o -> restart_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void restart_cal(void)

{
  i2c_writeReg_Mask(0x62,1,0,6,6,0);
  i2c_writeReg_Mask(0x62,1,0,5,5,0);
  i2c_writeReg_Mask(0x62,1,0,5,5,1);
  i2c_writeReg_Mask(0x62,1,0,6,6,1);
  return;
}

